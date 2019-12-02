#include <stdio.h>

//using namespace std;


int gcd(int a, int b) {
    if (!a) {
        return b;
    }

    return gcd((b % a), a);
}


int main() {
    int a = 12;
    int b = 15;

    printf("%d\n", gcd(a, b));

    return 0;
}
