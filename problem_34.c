#include<stdio.h>
int main(){
    int physics, chemistry, biology, mathematics, computer;
    float percentage; 

    printf("Enter your marks for Physics, Chemistry, Biology, Mathematics, and Computer: ");
    scanf("%d %d %d %d %d", &physics, &chemistry, &biology, &mathematics, &computer);
    
    percentage = (physics + chemistry + biology + mathematics + computer) / 5.0;

    if (percentage >= 90) {
        printf("Grade: A*\n");
    }
    else if (percentage >= 80) {
        printf("Grade: A\n");
    }
    else if (percentage >= 70) {
        printf("Grade: A-\n");
    }
    else if (percentage >= 60) {
        printf("Grade: D\n");
    }
    else if (percentage >= 40) {
        printf("Grade: E\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}
