// data file read and write kora function 
#include <stdio.h>

int main() {
    FILE *fptr;
    char str[100];

    fptr = fopen("data.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a string to write to file: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fptr, "%s", str);
    fclose(fptr);

    // file r pora poha 
    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Data from file:\n");
    while (fgets(str, sizeof(str), fptr) != NULL) {
        printf("%s", str);
    }

    fclose(fptr);

    return 0;
}

