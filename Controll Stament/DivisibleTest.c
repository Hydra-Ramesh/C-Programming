#include<stdio.h>
int main(){
    int x;
    printf("Enter Your Number: ");
    scanf("%d",&x);
    if(x%3==0 && x%5==0){
        printf("Divisible by 3 and 5\n");
        if(x%15==0){
            printf("Divisible by 3, 5, 15\n");
            if(x%30==0){
                printf("Divisible by 3, 5, 15, 30\n");
            }else{
                printf("Not Divisible by 30\n");
            }
        }else{
            printf("Not Divisible by 15\n");
        }
    }else{
        printf("Not Divisible by 3 and 5\n");
    }
}