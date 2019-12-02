#include <stdio.h>


unsigned long long factorial(unsigned long long num) {
    if (num <= 1) {
        return 1;
    }

    return factorial(num - 1) * num;
}


int main() {
    unsigned long long num = 0;

    scanf("%lld", &num);

    num = factorial(num);
    printf("%lld\n", num);

    return 0;
}
