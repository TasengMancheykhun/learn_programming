#include <stdio.h>

// Function to calculate Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base cases: F(0) = 0, F(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n;

    printf("Enter the number of terms in Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
