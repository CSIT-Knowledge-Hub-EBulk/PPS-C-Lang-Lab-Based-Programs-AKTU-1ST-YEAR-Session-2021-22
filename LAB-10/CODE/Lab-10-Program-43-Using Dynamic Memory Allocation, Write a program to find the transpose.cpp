/*Using Dynamic Memory Allocation, Write a program to find the transpose 
of given matrix. 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring pointers
    int *tranMatrix;
    int row, col;

    printf("Enter rows and columns in the matrix: ");
    scanf("%d%d", &row, &col);

    //memory allocating for matrix using dynamic memory allocation
    tranMatrix = (int *)calloc(row * col, sizeof(int));

    printf("Enter the rows and column value in matrix format: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", tranMatrix + (i * col + j) * sizeof(int));
        }
    }

    printf("Transpose of matrix is: \n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%4d", *(tranMatrix + (j * col + i) * sizeof(int)));
        }
        printf("\n");
    }

    return 0;
}
