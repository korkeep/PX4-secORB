#include "secORB.h"
#include "secORB-32.h"

void
secORB_update(secORB_context *ctx, const unsigned char *m, size_t bytes) {
	secORB_state_internal_t *st = (secORB_state_internal_t *)ctx;
	size_t i;

	/* handle leftover */
	if (st->leftover) {
		size_t want = (secORB_block_size - st->leftover);
		if (want > bytes)
			want = bytes;
		for (i = 0; i < want; i++)
			st->buffer[st->leftover + i] = m[i];
		bytes -= want;
		m += want;
		st->leftover += want;
		if (st->leftover < secORB_block_size)
			return;
		secORB_blocks(st, st->buffer, secORB_block_size);
		st->leftover = 0;
	}

	/* process full blocks */
	if (bytes >= secORB_block_size) {
		size_t want = (bytes & ~(secORB_block_size - 1));
		secORB_blocks(st, m, want);
		m += want;
		bytes -= want;
	}

	/* store leftover */
	if (bytes) {
		for (i = 0; i < bytes; i++)
			st->buffer[st->leftover + i] = m[i];
		st->leftover += bytes;
	}
}

void
secORB_auth(unsigned char mac[16], const unsigned char *m, size_t bytes, const unsigned char key[32]) {
	secORB_context ctx;
	secORB_init(&ctx, key);
	secORB_update(&ctx, m, bytes);
	secORB_finish(&ctx, mac);
}

int
secORB_verify(const unsigned char mac1[16], const unsigned char mac2[16]) {
	size_t i;
	unsigned int dif = 0;
	for (i = 0; i < 16; i++)
		dif |= (mac1[i] ^ mac2[i]);
	dif = (dif - 1) >> ((sizeof(unsigned int) * 8) - 1);
	return (dif & 1);
}