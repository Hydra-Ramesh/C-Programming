#include<stdio.h>
int main(){
    int n = 12345;
    int reverse = 0;
    while(n!=0){
        reverse = reverse + (n%10);
        reverse = reverse*10;
        n = n/10;
    }
    reverse = reverse/10; // Removing the last zero from reversed number
    printf("%d\n", reverse);
}