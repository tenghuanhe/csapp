#include <stdio.h>
#include <swap_reverse.h>

#define N 5

void print_array(int a[], int cnt);

int main() {
    int a[N] = {1, 2, 3, 4, 5};
    print_array(a, N);
    reverse_array(a, N);
    print_array(a, N);

    return 0;
}

void print_array(int a[], int cnt) {
    int i;
    for (i = 0; i < cnt - 1; i++) {
        printf("%d ", a[i]); 
    }

    printf("%d\n", a[i]);
}
