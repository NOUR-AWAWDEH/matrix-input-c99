#include <stdio.h>
#include <stdlib.h>
int rows()
{
    int n;
    printf("Please Enter the Rows number: ");
    scanf("%d", &n);
    return n;
}
int columns()
{
    int m;
    printf("Please Enter the Columns number: ");
    scanf("%d", &m);
    return m;
}
void scan_matrix(float matrx[100][100], int Rows, int Cols)
{
    for( int i = 0 ; i < Rows; i++)
    {
        for(int j = 0 ; j < Cols ; j++ )
        {
            printf("Please Enter the Elements of the matrix [%d][%d]: ", i, j);
            scanf("%f",&matrx[i][j]);
        }
        printf("\n");
    }
}
void print_matrix(float matrx[100][100], int Rows, int Cols)
{
    printf("The matrix is:\n");
    for (int i = 0; i < Rows; i++) 
    {
        for (int j = 0; j < Cols; j++) 
        {
            printf("\t%.0f ", matrx[i][j]);
        }
        printf("\n");
    }
}
float Sum_Elements(float matrx[100][100], int Rows, int Cols)
{
    float sum = 0.0;
    for (int i = 0; i < Rows; i++) 
    {
        for (int j = 0; j < Cols; j++) 
        {
            sum = sum + matrx[i][j];
        }
    }

    return sum;
}
int main(){
    //rows function
    int Rows = rows();
    //cols function 
    int Cols = columns();
    float Matrix[100][100];
    //scan elemets of matrix
    scan_matrix(Matrix, Rows, Cols);
    print_matrix(Matrix, Rows, Cols);
    printf("The Sum of the Element is %.0f",Sum_Elements(Matrix, Rows, Cols));
    return 0;
}