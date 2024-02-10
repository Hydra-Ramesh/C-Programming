//Take percentage of a student and print the Grade according to marks:
#include<stdio.h>
int main(){
    int n;
    printf("Enter the percentage of Number:");
    scanf("%d",&n);
    if(n<=100 && n>=91){
        printf("Outstanding");
    }
    if(n<=90 && n>=981){
        printf("Excellent");
    }
    return 0;
}