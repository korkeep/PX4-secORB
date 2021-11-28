#ifndef POLY1305_DONNA_H
#define POLY1305_DONNA_H

#include <stddef.h>

typedef struct secORB_context {
	size_t aligner;
	unsigned char opaque[136];
} secORB_context;

void secORB_init(secORB_context *ctx, const unsigned char key[32]);
void secORB_update(secORB_context *ctx, const unsigned char *m, size_t bytes);
void secORB_finish(secORB_context *ctx, unsigned char mac[16]);
void secORB_auth(unsigned char mac[16], const unsigned char *m, size_t bytes, const unsigned char key[32]);
int secORB_verify(const unsigned char mac1[16], const unsigned char mac2[16]);

#endif /* POLY1305_DONNA_H */

