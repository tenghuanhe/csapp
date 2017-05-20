#include <stdio.h>

int bool_equal(int x, int y);
void test(int x, int y);

int main() {
    test(0, 0);
    test(1, 0);
    test(1, 1);
    test(0, 1);
    test(100, 100);
    test(32767, 32767);
    test(-10, -10);
    test(-1, 32767);

    return 0;
}


int bool_equal(int x, int y) {
    return !(x ^ y);
}

void test(int x, int y) {
    if ((x == y) == bool_equal(x, y)) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }
}
