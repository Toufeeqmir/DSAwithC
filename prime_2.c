#include <stdio.h>

int is_prime(int n, int i) {
    if (i == 1) {
        return 1; // 1 is not a prime number
    }
    if (n <= 1) {
        return 0; // numbers less than or equal to 1 are not prime
    }
    if (n % i == 0) {
        return 0; // if n is divisible by i, it's not prime
    }
    if (i * i > n) {
        return 1; // if i*i > n, then n is prime
    }
    return is_prime(n, i + 1); // recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_prime(num, 2)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}