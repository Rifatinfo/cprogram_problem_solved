#include<stdio.h>
int main(){
    float gpa1=3.00,  gpa2=3.00, gpa3=3.00, totalGpa , average;
    totalGpa = gpa1 + gpa2 + gpa3;
    average = totalGpa / 3;
     printf("average %.2f\n",average);
    if(average >= 3.9){
       printf("Full Funded Scholarship");

    }
    else if(average < 3.9 && average > 3.50){
       printf("Full Funded Scholarship");
    }
    else{
        printf("NoScholarship");
    }

}

