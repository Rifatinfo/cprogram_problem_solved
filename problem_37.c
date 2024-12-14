#include<stdio.h>
int main(){
    int number[] = {34, 56, 88878, 34, 55555523 ,22222267,-87};
    
    int max=number[0];
    for(int i=1; i<7; i++){
        if(max<number[i]){
           max=number[i];
        }
    }
        printf("The Large Number Is : %d", max);
}