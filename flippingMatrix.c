/*
	Denys Borysevych
	HackerRanck Solution in C
	Flipping Matrix
	18.03.2022
					*/

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


