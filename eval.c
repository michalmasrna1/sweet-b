#include "include/sb_sw_lib.h"

int main(void) {
    sb_sw_private_t private_key;
    sb_sw_public_t public_key;
    sb_sw_context_t ct;
    sb_sw_shared_secret_t secret;
    // TODO: Decide on which curve to use
    sb_sw_shared_secret(&ct, &secret, &private_key, &public_key, NULL, SB_SW_CURVE_P256, SB_DATA_ENDIAN_BIG);
    return 0;
}
