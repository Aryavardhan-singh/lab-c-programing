//WAP to print all possible prime numbers starting from 0 to N. 
#include <stdio.h>

int main() {
    int N, i, j, isPrime;

    printf("Enter the value of N: ");
    scanf("%d", &N); // Remember the '&' for the address!

    printf("Prime numbers between 0 and %d are:\n", N);

    // 0 and 1 are not prime, so we start from 2
    for (i = 2; i <= N; i++) {
        isPrime = 1; // Assume the number is prime until proven otherwise

        // Inner loop: try to divide 'i' by 'j'
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Found a divisor, so it's NOT prime
                break;       // Stop checking this number
            }
        }

        // If isPrime is still 1, it means no divisors were found
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}