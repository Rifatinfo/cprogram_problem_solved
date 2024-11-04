#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c, discrimination, root1, root2, realpart, imaginaryPart;

    printf("Enter the value of a,b,c : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discrimination = b*b - 4*a*c;

    if(discrimination > 0){
       root1 = (-b + sqrt(discrimination)) / 2 * a ;
       root2 = (-b - sqrt(discrimination)) / 2 * a ;

       printf("root1 : %lf and root2: %lf", root1, root2);
    }
    else if(discrimination == 0){
       root1=root2= (-b) / (2*a);
       printf("root1 : %lf and root2: %lf", root1, root2);
    }
    else{
        realpart = (-b) / (2*a);
        imaginaryPart = (sqrt(-discrimination)/(2*a));
        printf("root1: %lf + %lfi, root2: %lf - %lfi", realpart,imaginaryPart);
    }
}
