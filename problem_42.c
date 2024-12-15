#include<stdio.h>
int main(){
    int array1[5] = {1,2,3,4,5,6,7,8,9}, array2[5],i;
    
    printf("Array1 :\n");
    for(int i=0; i<5; i++){
        printf("%d\n", array1[i]);
    }
    printf("\n");

    for(int i=0; i<5; i++){
        array2[i]=array1[i];
    }
    printf("Array2 :\n");
    for(int i=0; i<5; i++){
        printf("%d\n", array2[i]);
    }
    printf("\n");
}