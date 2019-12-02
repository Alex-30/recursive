#include <stdio.h>


int fast_power(int a, int n, int m) {
    if (n == 0) {
        return 1;
    } else if ((n % 2) == 0) {
        return fast_power((a * a) % m, (n / 2), m);
    } else {
        return a * fast_power((a * a % m), (n / 2), m) % m;
    }

}


int main() {
    int num = 5;
    int count = 20;      // num ^ count
    int m = 100;      // mod m

    printf("%d\n", fast_power(num, count, m));

    return 0;
}
