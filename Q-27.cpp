// eta string r length bisara
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }

    printf("Length of string is %d\n", i);

    return 0;
}


