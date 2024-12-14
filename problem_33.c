#include<stdio.h>
int main(){
    int height;
    printf("Please Enter your height : ");
    scanf("%d", &height);

    if(height < 150){
       printf("Drwaf");
    } 
    else if(height == 150){
      printf("Average Height"); 
    }
    else{
      printf("Tall");
    }
}