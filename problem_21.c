#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the number of the series : ");
    scanf("%d",&n);
    printf("1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 +  9 ......... + %d",n);
    
    for(int i = 0 ; i <=n; i++){
        sum = sum + i ;
    }
    printf("%d\n",sum);
}