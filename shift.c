#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char s[1000];
    int i;
    FILE *f1, *f2;
    f1 = fopen("FILE1.txt", "w");
    printf("Enter a program:: ");
    gets(s);
    fprintf(f1, "%s", s);
    fclose(f1);

    f1 = fopen("FILE1.txt", "r");
    f2 = fopen("FILE2.txt", "w");
    fscanf(f1, "%[^\n]s", s);

    char a;
    for (i = 0; i < strlen(s); i++) {
        a = s[i];
        //printf("%c", a);

        if (a >= 'a' && a <= 'z') {
            // lower case
            a = (a - 'a' + 2) % 26 + 'a';
            // printf("%c", a);
        } else if (a >= 'A' && a <= 'Z') {
            a = (a - 'A' + 2) % 26 + 'A';
            // printf("%c", a);
        }
        fprintf(f2, "%c", a);
    }
    fclose(f1);
    fclose(f2);

    f1 = fopen("FILE1.txt", "r");
    f2 = fopen("FILE2.txt", "r");

    printf("\nFILE1.txt\n");
    char ch = getc(f1);
    while (ch != EOF) {
        putchar(ch);
        ch = getc(f1);
    }
    printf("\nFILE2.txt\n");
    ch = getc(f2);
    while (ch != EOF) {
        putchar(ch);
        ch = getc(f2);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
