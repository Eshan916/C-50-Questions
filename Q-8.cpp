// factorial bisora//
#include <stdio.h>

int main() {
    int n, i, result = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        result = result * i;
    }

    printf("Factorial of %d is %d\n", n, result);

    return 0;
}

