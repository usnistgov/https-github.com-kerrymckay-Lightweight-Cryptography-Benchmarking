#include "lwc_crypto_hash.h"
#include "api.h"


hash_ctx lwc_hash_ctx = {
	"asconhashav12",
	"armv6m_lowsize",
	CRYPTO_BYTES,
	crypto_hash,
};

