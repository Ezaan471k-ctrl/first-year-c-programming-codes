#include <stdio.h>

int main() {
    FILE *src, *dest;
    int ch;
    src = fopen("output.txt", "r");
    dest = fopen("copy.txt", "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening file. Run 61_write_file.c first.\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    printf("Copied output.txt to copy.txt\n");
    return 0;
}
