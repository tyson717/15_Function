#include <stdio.h>


unsigned factorial(unsigned x) {
    unsigned product = 1;
    for (int i = 1; i <= x; ++i) {
        product *= i;
    }
    return product;

    printf("...."); // Does not execute
}

// Computes C(n,k) and returns it.
// If k < n, returns 0.
// n and k should small enough so that an overflow
// does not happen. If it happens the return value is unreliable.
unsigned choose(unsigned n, unsigned k) {
    if (k>n) {
        return 0; // sentinel value
    }
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
// C(n,k) = n! / k!(n-k)!
// Code re-use
    unsigned n, k;
    scanf("%u",&n);
    scanf("%u",&k);
    printf("%u\n", choose(n, k));



}
