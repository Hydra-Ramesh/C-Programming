//Two Sum
#include <stdio.h>
int main(){
    int nums[10] = {2,7,11,15};
    int target = 9;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(nums[i]+nums[j]==target){
                printf("%d %d\n",i,j);
            }
        }
    }
    return 0;
}