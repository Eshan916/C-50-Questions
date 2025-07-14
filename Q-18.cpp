// 1 r pora 100 logeh sob prime number print kora
#include <stdio.h>

int main() {
    int i, j;

    printf("Prime numbers between 1 and 100 are:\n");

    for (i = 2; i <= 100; i++) {
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0)
                break;  // jodi prime nohoi loop exit kori diya
        }
        if (j > i / 2)  // break nuhuwa keh loop hoi goleh prime hobo 
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

