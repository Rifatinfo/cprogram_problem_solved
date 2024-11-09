#include<stdio.h>
int main(){
    int digit;

    printf("Enter a digit :");
    scanf("%d", &digit);

    switch (digit)
    {
      case 0:
           printf("Zero\n");
           break;
      case 1:
           printf("One\n");
            break;
      case 2:
           printf("Two\n");
            break;
      case 3:
           printf("Three\n");
            break;
      case 4:
           printf("four\n");
            break;
      case 5:
           printf("five\n");
    }


}