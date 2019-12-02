#include <stdio.h>


void reverse(int num) {
    printf("%d", (num % 10));

    if ((num / 10) > 0) {
        reverse(num / 10);
    }
}


int main() {
    int num = 0;

    scanf("%d", &num);

    reverse(num);
    printf("\n");

    return 0;
}
