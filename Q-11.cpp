//  number prine hoi neh nohoi check kora //
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not prime\n");
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("Not prime\n");
            return 0;  // ulai diya jodi divisible hoi
        }
    }

    printf("Prime\n");
    return 0;
}

