//Take three side of a triangle and test it is valid or not.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first side of Triangle:");
    scanf("%d",&a);
     printf("Enter the second side of Triangle:");
     scanf("%d",&b);
    printf("Enter the third side of Triangle:");
    scanf("%d",&c);
    if(a+b>c&&b+c>a&&c+a>b){
        printf("It is a valid triangle");
    }else{
        printf("It is invalid Triangle");
    }return 0;
} 