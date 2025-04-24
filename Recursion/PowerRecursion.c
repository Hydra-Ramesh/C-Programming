#include<stdio.h>
int pow(int base, int exp){
    if(exp==0){
        return 1;
    }
    return base*pow(base,exp-1);
}
int main(){
   int res = pow(2,6);
    printf("%d",res);
}