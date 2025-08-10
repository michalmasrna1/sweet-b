#include "include/sb_sw_lib.h"

int main(void) {
  sb_sw_context_t ct;
  sb_sw_public_t public_key;
  sb_sw_private_t private_key;
  sb_sw_shared_secret_t result;
  sb_sw_shared_secret(&ct, &result, &private_key, &public_key, NULL,
                      SB_SW_CURVE_SECP256K1, SB_DATA_ENDIAN_BIG);
  return 0;
}
