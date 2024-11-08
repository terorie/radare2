#include "kv.c"

int LLVMFuzzerTestOneInput(const ut8 * buf, size_t sz) {
    char * input = malloc (sz + 1);
    if (!input) return -1;

    memcpy (input, buf, sz);
    input[sz] = '\x00';

    char * result = parse_header (input);
    free (result);
    free (input);
    return 0;
}
