//Display this AP-1,3,5,7,9...n terms.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (int i=1;i<=n;i=i+2){
        printf("%d\n",i);
    }
    return 0;
}