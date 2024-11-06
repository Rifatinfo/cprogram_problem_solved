#include<stdio.h>
int main(){
    long long num;
    int reverse = 0, remain;
    
    printf("Enter a number : ");
    scanf("%lld", &num);

    while(num != 0){
        remain = num % 10;
        reverse = reverse * 10 + remain;
        num  /= 10;
    }
    printf("Reverse number : %d", reverse);
}