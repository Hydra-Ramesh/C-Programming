// If ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
#include<stdio.h>
int main(){
    int Ram,Shyam,Ajay;
    printf("Enter the age of Ram:");
    scanf("%d",&Ram);
    printf("Enter the age of Shyam:");
    scanf("%d",&Shyam);
    printf("Enter the age of Ajay:");
    scanf("%d",&Ajay);
    if(Ram>Shyam&&Ram>Ajay){
        printf("Ram is Elder");
    }if(Shyam>Ram&&Shyam>Ajay){
        printf("Shyam is Elder");
    }else{
        printf("Ajoy is Elder");
    }
    return 0;
}