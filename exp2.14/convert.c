#include <stdio.h>

int main() {
    short int v = -12345;
    unsigned short uv = (unsigned short) v;
    printf("v = %d, uv = %u\n", v, uv);

    unsigned u = 4294967295u;
    int tu = (int) u;
    printf("u = %u, tu = %d\n", u, tu);

    printf("%d\n", -2147483647 - 1 == 2147483648U);
    printf("%d\n", -2147483647 - 1 < 2147483647);
    printf("%x\n", -2147483647 - 1U);
    printf("%d\n", -2147483647 - 1 < -2147483647);
    printf("%d\n", -2147483647 - 1u < -2147483647);
}
