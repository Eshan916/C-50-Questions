// consonats, vowels,digits count kora
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Check vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        }

        i++;
    }

    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\n", vowels, consonants, digits, spaces);

    return 0;
}

