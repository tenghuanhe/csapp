#include <vax.h>

int bis(int x, int m) {
    return x | m;    
}

int bic(int x, int m) {
    return (x ^ m) & x;
}
