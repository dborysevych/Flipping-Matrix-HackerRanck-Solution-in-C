/*
	Denys Borysevych
	HackerRanck Solution in C
	Flipping Matrix
					*/


#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printMatrix(int** matrix, int matrix_rows, int matrix_columns)
{
    printf("\n---------------------\n");
    for(int i = 0; i < matrix_rows;i++)
    {
        for(int j = 0; j < matrix_columns;j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n---------------------\n");

}

int maxm(int a,int b,int c,int d){
    int max;
    if(a>=b && a>=c && a>=d){
        max=a;
    }
    else if(a<=b && b>=c && b>=d)
        max=b;
    else if(c>=b && a<=c && c>=d)
        max=c;
   else
        max=d;
   return max;
}

int flippingMatrix(int matrix_rows, int matrix_columns, int** x) {

    int m =matrix_columns;
    int n = matrix_columns/2;
     int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d %d %d %d\n", x[i][j],x[i][m-1-j],x[m-1-i][j],x[m-1-i][m-1-j]);
                sum+=maxm(x[i][j],x[i][m-1-j],x[m-1-i][j],x[m-1-i][m-1-j]);
            }
        }
    return sum;
}




int main()
{
    int n = 2;

        int** matrix = malloc((2 * n) * sizeof(int*));

        for (int i = 0; i < 2 * n; i++) 
            *(matrix + i) = malloc((2 * n) * (sizeof(int)));

           matrix[0][0] = 112;
           matrix[0][1] = 42;
           matrix[0][2] = 83;
           matrix[0][3] = 119;
           
           matrix[1][0] = 56;
           matrix[1][1] = 125;
           matrix[1][2] = 56;
           matrix[1][3] = 49;
           
           matrix[2][0] = 15;
           matrix[2][1] = 78;
           matrix[2][2] = 101;
           matrix[2][3] = 43;
           
           matrix[3][0] = 62;
           matrix[3][1] = 98;
           matrix[3][2] = 114;
           matrix[3][3] = 108;
        
        int result = flippingMatrix(2 * n, 2 * n, matrix);

        fprintf(stdout, "%d\n", result);

        if(result == 414)
            printf("OK");
        else
            printf("NO OK");

    return 0;
}
