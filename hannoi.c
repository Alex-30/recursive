#include <stdio.h>


void hannoi(int num, char A, char B, char C) {
    if (!num) {
        return;
    }

    hannoi((num - 1), A, C, B);
    printf("Move ring %d from %c to %c.\n", num, A, C);
    hannoi((num - 1), B, A, C);
}


int main() {
    int num = 0;

    while (scanf("%d", &num) != EOF) {
        hannoi(num, 'A', 'B', 'C');
    }

    return 0;
}
