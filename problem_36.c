#include<stdio.h>
int main(){
    int number[5], sum=0, count=0;
    float avg;

    for(int i=0; i<5; i++){
        printf("number[%d] = ", i);
        scanf("%d", &number[i]);
    }
    for(int i=0; i<5; i++){
        count++;
        sum = sum + number[i];
        avg = sum / count;
        printf("%d\n", number[i]);
    }
    printf("The Total Number of sum : %d \n", sum);
    printf("%d\n", count);
    printf("%.2f", avg);
}