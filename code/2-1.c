#include <stdio.h>

void increment (int x) {
    ++x;//이 함수 내에서만 증가함.
    printf("%d\n",x);
}

int main() {
    int x = 10;

    printf("%d\n", x);
    increment(x);
    printf("%d\n", x);

    return 0;
}