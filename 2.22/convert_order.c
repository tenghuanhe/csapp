#include <stdio.h>
#include "showbytes.h"

int main() {
    short sx = -12345;
    unsigned uy = sx;

    printf("uy = %u:\t", uy);
    show_unsigned(uy);
}
