//Write a Programme to claculate the perimeter of a Rectangle.
#include <stdio.h>
int main(){
    float l, b;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);
    float perimeter = 2 * (l + b);
    printf("The perimeter of the rectangle is %.2f\n", perimeter);
    return 0;
}