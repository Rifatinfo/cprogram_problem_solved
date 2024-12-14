#include<stdio.h>
int main(){
    int minutes, hours, ConvertMinutes, TotalMinutes;

    printf("Please Enter minutes and hours : ");
    scanf("%d %d", &minutes,&hours);

    ConvertMinutes = hours * 60;
    TotalMinutes = minutes + ConvertMinutes;

    printf("The Total Taken Minutes : %d", TotalMinutes);

}