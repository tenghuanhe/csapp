#include <stdio.h>
#include "showbytes.h"

int main() {
    short sx = -12345;
    unsigned short usx = sx;
    int x = sx;
    unsigned ux = usx;

    printf("sx = %d:\t", sx);
    show_short(sx);
    printf("usx = %u:\t", usx);
    show_unsigned_short(usx);
    printf("x = %d:\t", x);
    show_int(x);
    printf("ux = %u:\t", ux);
    show_unsigned(ux);
}
