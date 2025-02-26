#include<stdio.h>
int main() {
    int a = 3;
    int b = 4;
    int c;
    c = a++ + --b + b++ - --a - ++b;
    printf("c = %d", c);
    printf("a = %d", a);
    printf("b = %d", b);
    return 0;  // Output: c = 10
}