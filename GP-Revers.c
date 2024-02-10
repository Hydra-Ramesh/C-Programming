//Display this GP-100,50,25,... upto n terms.
#include<stdio.h>
int main(){
    float n;
    printf("Enter the value of n:");
    scanf("%f",&n);
    float a=100;
    for(int i=1;i<=n;i++){
        printf("%f\n",a);
        a=a/2;
    }
    return 0;
}