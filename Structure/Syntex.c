#include<stdio.h>
#include<string.h>
struct Girls{
    //Structure data Member
    int age;
    char name[50];
    char address[100];
    char bf_name[100];
    char parents_name[100];
};
int main(){
    struct Girls jinia; //Create a structure variable
    jinia.age=19;//Init the value for Jinia
    strcpy(jinia.name,"Jinia");
    strcpy(jinia.address,"Ramtarak");
    strcpy(jinia.bf_name,"Babu");
    strcpy(jinia.parents_name,"Jiten Babu");
    printf("Age of %s is %d\n",jinia.name,jinia.age);//Printing the value of Jinia or raplica of Girls not the value of girls
    printf("She is from %s\n",jinia.address);
    printf("Her Boyfriend name is %s\n",jinia.bf_name);
    printf("Her Parents name is %s\n",jinia.parents_name);
    return 0;
}