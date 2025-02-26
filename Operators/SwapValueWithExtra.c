#include<stdio.h>
int main(){
    int x = 5;
    int y = 10;
    int z = x;
    x = y;
    y = z;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}
