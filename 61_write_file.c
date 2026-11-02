#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];
    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("File could not be opened\n");
        return 1;
    }

    printf("Enter text to write: ");
    scanf(" %[^\n]", text);
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("Data written to output.txt\n");
    return 0;
}
