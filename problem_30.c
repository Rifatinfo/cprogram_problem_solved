#include<stdio.h>
int main(){
    int num1, num2, sum;

    printf("Please Enter Two Number : ");
    scanf("%d %d", &num1,&num2);
  
    sum = num1 + num2;


    if(num1 != num2){
       printf("The Two Number Sum %d: ", sum);
    } 
    else{
        printf("The Triple of Sum %d: ", sum * 3);
    }

    return 0;
}