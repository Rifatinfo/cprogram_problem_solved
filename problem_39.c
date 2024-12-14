// first and second largest number from an array 
#include<stdio.h>
int main(){
    int firstLargest, secondLargest;
  int number[] = {12,10,9,8,7,6,5,4,3,2,1};
  int sizeOfNumber = sizeof(number)/sizeof(number[0]);
//   printf("%d\n", sizeOfNumber);

  if(sizeOfNumber < 2){
    printf("Please Provided length greater then two ");
  }

  if(number[0] > number[1]){
     firstLargest = number[0];
     secondLargest = number[1];
  }
  else{
     firstLargest = number[1];
     secondLargest = number[0];
  }

  for(int i=2; i < sizeOfNumber; i++){
        if(number[i] > firstLargest){
            secondLargest = firstLargest;
            firstLargest = number[i];
        }
        else if(number[i] > secondLargest && number[i] != firstLargest){
            secondLargest = number[i];
        }
        
  }
  printf("%d %d",firstLargest,secondLargest);

}