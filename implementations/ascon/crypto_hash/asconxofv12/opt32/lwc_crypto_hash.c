#include "lwc_crypto_hash.h"
#include "api.h"


hash_ctx lwc_hash_ctx = {
	"asconxofv12",
	"opt32",
	CRYPTO_BYTES,
	crypto_hash,
};

