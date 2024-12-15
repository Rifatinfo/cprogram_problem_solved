#include<stdio.h>
int main(){
    int i,j;
    // int A[3][4] = { {4,5,6,5},
    //                 {7,4,2,6},
    //                 {7,8,3,8}
    //               };
    int A[4][5];
    printf("Enter the elements of a 4x5 matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe 4x5 matrix is:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

}