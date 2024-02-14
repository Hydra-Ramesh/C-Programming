//Take a input from user of a rectangle for count perimeter and area.And test perimeter and area greter than or not.
#include<stdio.h>
int main(){
    int l,w;
    printf("Enter the lenght of Rectangle:");
    scanf("%d",&l);
    printf("Enter the wdith:");
    scanf("%d",&w);
    int p=2*(l+w);
    int a=l*w;
    if(p>a){
        printf("Perimeter is greater than Area");
    }if(p<a){
        printf("Perimeter is less than Area");
    }else{
        printf("Perimeter is eqal than Area");
    }
    return 0;
}