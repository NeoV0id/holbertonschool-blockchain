#ifndef __HBLK_CRYPTO_H__
#define __HBLK_CRYPTO_H__

# include <openssl/sha.h>
# include <stdint.h>

# define EC_CURVE   NID_secp256k1

/* EC_KEY public key octet string length (using 256-bit curve) */
# define EC_PUB_LEN 65
/* Maximum signature octet string length (using 256-bit curve) */
# define SIG_MAX_LEN    72

# define PRI_FILENAME   "key.pem"
# define PUB_FILENAME   "key_pub.pem"

/**
 * struct sig_s - EC Signature structure
 *
 * @sig: Signature buffer. The whole space may not be used
 * @len: Actual signature size. Can't exceed SIG_MAX_LEN, therefore stored on a byte
 */
typedef struct sig_s
{
    /*
     * @sig must stay first, so we can directly use the structure as
     * an array of char
     */
    uint8_t     sig[SIG_MAX_LEN];
    uint8_t     len;
} sig_t;

#endif /*__HBLK_CRYPTO_H__*/
