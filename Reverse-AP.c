//Display this AP-100,97,94,...upto all terms which are postive.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a=100;
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a=a-3;
    }
    return 0;
}