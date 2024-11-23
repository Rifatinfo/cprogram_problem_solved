// 1^2 + 2^2 + 3^3 + 4^4 + .......+n^2
#include<stdio.h>
int main(){
    int i, sum = 0, n;
    printf("Enter n = ");
    scanf("%f", &n);

    for(i=1.5; i<=n; i++){
       sum = sum + i*i;
    }
    printf("sum = %d\n", sum);
}