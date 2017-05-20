#include <stdio.h>

int fun1(unsigned word);
int fun2(unsigned word);

void fun_test(unsigned word);

int main() {

    fun_test(0x00000076);
    fun_test(0x87654321);
    fun_test(0x000000C9);
    fun_test(0xEDCBA987);

}

int fun1(unsigned word) {
    return (int) ((word << 24) >> 24);
}

int fun2(unsigned word) {
    return ((int) word << 24) >> 24;
}

void fun_test(unsigned word) {
    printf("fun1 = %d:%08X\tfun2 = %d:%08X\n", fun1(word), fun1(word), fun2(word), fun2(word));
}
