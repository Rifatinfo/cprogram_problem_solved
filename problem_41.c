// copy of all element in array 
#include<stdio.h>
int main(){
    int n, array1[30], array2[30];
    printf("How many of Number");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
       printf("Number[%d] : ",i);
       scanf("%d", array1[i]);
    }
    for(int i=0; i<n; i++){
        array2[i] = array1[i];
    }
    for(int i=0; i<n; i++){
        printf("array2 %d", array1[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++){
        printf("array2 %d", array2[i]);
    }
    printf("\n");
}