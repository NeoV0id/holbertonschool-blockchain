#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <openssl/sha.h>
#include "hblk_crypto.h"

/**
 *
 */
uint8_t *sha256(int8_t const *s, size_t len, uint8_t digest[SHA256_DIGEST_LENGTH]);
{
	if (digest == NULL)
		return (NULL);
}
