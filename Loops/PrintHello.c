#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of times you want to print Hello World: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Hello World\n");
    }
    return 0;
}