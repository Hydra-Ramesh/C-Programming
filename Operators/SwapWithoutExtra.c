#include<stdio.h>
int main(){
    int x = 5;
    int y = 10;
    x = x+y;
    y = x-y;
    x = x-y;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}
