#include<stdio.h>
int main(){
    int marks;
    int marks2;
    printf("Enter the marks achieved by Jinia in HS: ");
    scanf("%d", &marks);
    printf("Enter the marks achieved by Jinia in MP: ");
    scanf("%d", &marks2);
    if(marks >450 || marks2 >600){
        printf("As a result Jinia is eligible for Techno\n");
    }else{
        printf("Jinia is eligible for marriage\n");
    }

    // if(marks > 450 && marks2 > 600){
    //     printf("As a result Jinia will be eligible for take addmission at Techno");
    // }else{
    //     printf("Jinia is nor eligible for marriage neither Techno\n");
    // }
    return 0;
}