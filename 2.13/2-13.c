#include <vax.h>
#include <stdio.h>

int bool_or(int x, int y);
int bool_xor(int x, int y);

int main() {
    int x = 7;
    int y = 12;

    printf("x | y = %d\n", bool_or(x, y));
    printf("x ^ y = %d\n", bool_xor(x, y));

}

int bool_or(int x, int y) {
    return bis(x, y);
}

int bool_xor(int x, int y) {
    return bis(bic(x, y), bic(y, x));
}
