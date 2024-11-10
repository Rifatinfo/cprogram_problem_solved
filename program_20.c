#include<stdio.h>
int main(){
    int n = 123, count = 0;

    while (n!=0)
    {
       n = n / 10;
       count++;
    }
    printf("Total Number of Digit : %d", count);
}