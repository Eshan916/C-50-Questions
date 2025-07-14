// sting palindrome neh nai check kora 
#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            printf("String is not palindrome\n");
            return 0; 
        }
    }

    printf("String is palindrome\n");
    return 0;
}



