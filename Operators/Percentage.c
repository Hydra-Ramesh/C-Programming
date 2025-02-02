#include <stdio.h>
int main(){
    int bengali, english, math, physical_science, life_science, history, geography, total;
    float percentage;
    printf("Enter marks of Bengali: ");
    scanf("%d", &bengali);
    printf("Enter marks of English: ");
    scanf("%d", &english);
    printf("Enter marks of Math: ");
    scanf("%d", &math);
    printf("Enter marks of Pysical Science: ");
    scanf("%d", &physical_science);
    printf("Enter marks of Life Science: ");
    scanf("%d", &life_science);
    printf("Enter marks of History: ");
    scanf("%d", &history);
    printf("Enter marks of Geography: ");
    scanf("%d", &geography);
    total = bengali + english + math + physical_science + life_science + history + geography;
    percentage = total / 7;
    printf("Total marks: %d\n", total);
    printf("Percentage: %.2f\n", percentage);
    return 0;
}