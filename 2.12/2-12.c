#include <stdio.h>

int setA(int x);
int setB(int x);
int setC(int x);

int main() {
    int x = 0x87654321;

    printf("0x%08X\n", setA(x));
    printf("0x%8X\n", setB(x));
    printf("0x%8X\n", setC(x));

}

int setA(int x) {
    return x & 0xFF;
}

int setB(int x) {
    return ~(x | 0xFF) | setA(x);
}

int setC(int x) {
    return x | 0xFF;
}
