#include <stdio.h>

int main()
{
    int size;

    printf("Enter the array's row & column size= ");
    scanf("%d", &size);


    int a[size][size],i,j,sum = 0;


    printf("Enter array's elements=\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < size; i++)
    {
        sum += a[i][i]; 
    }

    printf("The sum of diagonal elements of an Array= %d\n", sum);

}