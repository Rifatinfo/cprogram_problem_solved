#include<stdio.h>
int main(){
    int roll, sub_1_Marks, sub_2_Marks, sub_3_Marks, totalMarks;
    float percentage; 

    printf("Please Enter your Roll, sub_1_Marks, sub_2_Marks, and sub_3_Marks: ");
    scanf("%d %d %d %d", &roll, &sub_1_Marks, &sub_2_Marks, &sub_3_Marks);

    totalMarks = sub_1_Marks + sub_2_Marks + sub_3_Marks;
    percentage = (totalMarks / 300.0) * 100; 

    printf("The Three Subject Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f", percentage); // Print percentage with 2 decimal places

    return 0;
}
