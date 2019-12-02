#include <stdio.h>


int fibonacci(int num) {
    if (num <= 2) {
        return 1;
    }

    return fibonacci(num - 1) + fibonacci(num - 2);
}


int main() {
    int num = 0;

    scanf("%d", &num);
    printf("%d\n", fibonacci(num));

    return 0;
}
