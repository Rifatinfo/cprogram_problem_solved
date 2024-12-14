// linear searching
#include<stdio.h>
int main(){
    
    int number[] = {65, 87, 65, 86, 65, 54, 9, -4};
    int searchingNumber = 65;
    int found = -1;

    for(int i=0; i<8; i++){
        if(searchingNumber == number[i]){
           found = i;    // update with the index 
           break;
        }
    }
    if(found == -1){
       printf("Not Found\n");
    }
    else{
        printf("The Number is found and position %d ", found);
    }
}