#include <stdio.h>
#include <math.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate binomial coefficient (n choose k)
int binomialCoefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Function to perform the binomial expansion of (a + b)^n
void binomialExpansion(int a, int b, int n) {
    for (int k = 0; k <= n; k++) {
        int coeff = binomialCoefficient(n, k);
        int term = coeff * pow(a, n - k) * pow(b, k);
        printf("%d", term);

        // Add plus sign between terms, but not after the last term
        if (k != n) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    int a, b, n;
    printf("Enter values for a, b, and n (for (a + b)^n): ");
    scanf("%d %d %d", &a, &b, &n);

    printf("The binomial expansion of (%d + %d)^%d is: ", a, b, n);
    binomialExpansion(a, b, n);

    return 0;
}
