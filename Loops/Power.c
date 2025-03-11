#include<stdio.h>
int power(int base, int index){
    int res = 1;
    for(int i=1;i<=index;i++){
        res = res * base;
    }
    return res;
}
int main(){
    int a = 3;
    int b = 4;
    int res = 1;
    // for(int i=1;i<=b;i++){
    //     res = res * a;
    // }
    // printf("%d",res);
    int ans = power(5,3);
    printf("%d",ans);
    return 0;

}