#include<stdio.h>
int main(){
    int num1, num2;
    printf("Please Enter your Two Numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 % 5 == 0 && num2 % 11 == 0) {
        printf("Both numbers are divisible by 5 and 11 respectively.\n");
    } 
    else {
        printf("One or both numbers are not divisible.\n");
    }

    return 0;
}
