#include <stdio.h>
#include <string.h>


void swap(char *a, char *b) {
    char tmp = 0;

    tmp = *a;
    *a = *b;
    *b = tmp;
}


void perm(char str[], int i, int num) {
    int j = 0;

    if (i == num) {
        printf("%s\n", str);
    } else {
        for (j = i; j < num; j++) {
            swap(&str[i], &str[j]);

            perm(str, (i + 1), num);

            swap(&str[i], &str[j]);
        }
    }
}


int main() {
    int num = 0;
    char str[100] = {0};

    scanf("%s", str);
    printf("\n");

    num = strlen(str);

    perm(str, 0, num);

    return 0;
}
