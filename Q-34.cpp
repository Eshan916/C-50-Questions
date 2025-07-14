// pointer aritmetic
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    int i;

    printf("Using pointer arithmetic:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d = %d\n", i, *(p + i));
    }

    return 0;
}

