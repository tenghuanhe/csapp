#include <stdio.h>
float sum_elements(float a[], unsigned length);

int main() {
    float a[3] = {1.1, 1.2, 1.4};

    printf("%f\n", sum_elements(a, 0));
    printf("%f\n", sum_elements(a, 1));
    printf("%f\n", sum_elements(a, 2));
    printf("%f\n", sum_elements(a, 3));
    return 0;
}
float sum_elements(float a[], unsigned length) {
    int i;
    float result = 0;

    for (i = 0; i < length; i++) {
        result += a[i];
    }

    return result;
}
