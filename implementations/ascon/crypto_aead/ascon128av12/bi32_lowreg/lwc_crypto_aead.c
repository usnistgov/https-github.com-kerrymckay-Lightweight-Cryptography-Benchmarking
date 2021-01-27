#include "lwc_crypto_aead.h"
#include "api.h"


aead_ctx lwc_aead_cipher = {
	"ascon128av12",
	"bi32_lowreg",
	CRYPTO_KEYBYTES,
	CRYPTO_NPUBBYTES,
	CRYPTO_ABYTES,
	crypto_aead_encrypt,
	crypto_aead_decrypt
};

