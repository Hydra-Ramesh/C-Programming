#include<stdio.h>
int main(){
    float x;
    printf("Enter a floating-point number: ");
    scanf("%f",&x);
    int y = (int)x;
    printf("The Fractional part is: %.2f",x-y);
    printf("\nThe Integral part is: %d",y);
    return 0;
}