#include <stdio.h>

int main() {
    FILE *fp;
    int ch;
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("File not found. Run 61_write_file.c first.\n");
        return 1;
    }

    printf("File contents:\n");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}
