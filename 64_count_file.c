#include <stdio.h>

int main() {
    FILE *fp;
    int ch;
    int chars = 0, words = 0, lines = 0, inWord = 0;

    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("File not found. Run 61_write_file.c first.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n')
            lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t')
            inWord = 0;
        else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);
    printf("Characters = %d\nWords = %d\nLines = %d\n", chars, words, lines);
    return 0;
}
