#include<stdio.h>
int main(){
    long long num;
    int count = 0;

    printf("Enter Your Number : ");
    scanf("%lld", &num);

    do{
        num /= 10;
        ++count;
    }
    while (num != 0 );
    printf("Number if digit : %d", count);
    
}