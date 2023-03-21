#include <stdio.h>
//input of matrix elements 
int main(){
    int matrix[10][10] ;
    int a,b;
    //this is the size
    printf("Please Enter the [a b] \n");
    scanf("%d %d",&a ,&b);
    // input The Elements 
    printf("Please Enter the Elements of the matrix \n");

    for(int i = 0 ; i < a ; i++ )
    {
        for (int j = 0 ; j < b ; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }
            printf("\n");

    //print the matrix Elements 

    for(int i = 0 ; i < a ; i++ ){
    for(int j = 0 ; j < b ; j++ )
    {
        printf("%d \t",matrix[i][j]);

    }
        printf("\n");
    }


    return 0;
}
