#include<stdio.h>
void add(int number, int total){
    if(number==0){
        printf("%d",total);
        return;
    }
    add(number-1,total+number);
    return;
}
int main(){
    int n = 10;
    int sum = 0;
    add(10,0);
    return 0;
}