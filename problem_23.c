// 1 + 2 + 3 + 4 + 5 
#include<stdio.h>
int main(){
    int n, sum=0, a=1;
    printf("Enter a the last number :");
    scanf("%d",&n);

    printf("1 + 2 + 3 + .... + %d", n);

    while (a<=n)
    { 
       sum = sum + a;
       a = a + 1;
    }
    printf(" = %d\n",sum);
    
}