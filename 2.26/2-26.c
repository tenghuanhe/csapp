#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t);
void test_strlonger(char *s, char *t, int expected);

int main() {
    test_strlonger("csapp", "sicp", 1);
    test_strlonger("csapp", "csapp", 0);
    test_strlonger("sicp", "csapp", 0);
    test_strlonger("sicp", "", 1);
    test_strlonger("", "csapp", 0);

    return 0;
}

int strlonger(char *s, char *t) {
    // return (int) (strlen(s) - strlen(t)) > 0;
    // or
    return strlen(s) > strlen(t) ? 1 : 0;

}

void test_strlonger(char *s, char *t, int expected) {
    if (strlonger(s, t) == expected) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }
}
