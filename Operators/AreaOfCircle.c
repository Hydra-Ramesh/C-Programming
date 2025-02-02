//Write a programme to calculate the area of a circle.
#include <stdio.h>
#define PI 3.14
int main(){
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    float area = PI * r * r;
    printf("The area of the circle is %.2f\n", area);
    return 0;
}