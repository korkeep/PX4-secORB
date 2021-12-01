#include "signORB.h"

int signORB_encrypt(unsigned char* inData, int inLen, unsigned char* outData)
{
	BIO* bio = BIO_new_mem_buf(private_key, -1);

    RSA* rsaPrivateKey = PEM_read_bio_RSAPrivateKey(bio, NULL, NULL, NULL);

    int len = RSA_private_encrypt(inLen, (const unsigned char*)inData, outData, rsaPrivateKey, RSA_PKCS1_PADDING);
 
    return len;
}

int signORB_decrypt(unsigned char* inData, int inLen, unsigned char* outData)
{
	BIO* bio = BIO_new_mem_buf(public_key, -1);

    RSA* rsaPublicKey = PEM_read_bio_RSA_PUBKEY(bio, NULL, NULL, NULL);

    int len = RSA_public_decrypt(inLen, (const unsigned char*)inData, outData, rsaPublicKey, RSA_PKCS1_PADDING);

    return len;
}