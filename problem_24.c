#include<stdio.h>
int main(){
    double num1, num2;
    char op;
    
    printf("Enter an operator (+,-,*,/) : ");
    scanf("%c", &op);
   
    printf("Enter a two numbers : ");
    scanf("%lf %lf", &num1, &num2);


    switch (op)
    {
    case  '+' : 
        {
            printf("%lf + %lf = %lf", num1, num2, num1 + num2);
        }
        break;
    case  '-' : 
        {
            printf("%lf - %lf = %lf", num1, num2, num1 - num2);
        }
        break;
    case  '*' : 
        {
            printf("%lf * %lf = %lf", num1, num2, num1 * num2);
        }
        break;
    case  '/' : 
        {
            printf("%lf / %lf = %lf", num1, num2, num1 / num2);
        }
        break;
    
    default:
       printf("Not a valid operator");
        break;
    }
}