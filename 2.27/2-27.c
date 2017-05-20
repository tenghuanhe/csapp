#include <stdio.h>
int uadd_ok(unsigned x, unsigned y);

int main() {
    unsigned a = 0xffffffff;
    unsigned b = 0x11;

    printf("%d\n", uadd_ok(a, b));

    return 0;
}

int uadd_ok(unsigned x, unsigned y) {
    return x + y >= x;
}
