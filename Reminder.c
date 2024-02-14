//Take two integer a and b ,define the value of Reminder.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int q=a/b;
    int r=a-(b*q);
    printf("The reminder is :%d",r);
    return 0;
}