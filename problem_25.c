// 1.5 + 2.5 + 3.5 + 4..5
#include<stdio.h>
int main(){
    float i, sum = 0, n;
    printf("Enter n = ");
    scanf("%f", &n);

    for(i=1.5; i<=n; i++){
       sum = sum + i;
    }
    printf("sum = %f.1\n", sum);
}