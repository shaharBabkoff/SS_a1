#include "my_mat.h"
#include <math.h>
#include <stdio.h>
#define true 1
#define false 0
 
 
void getValueOfMat( int mat [size][size]){
for (int i = 0; i < size; i++)// the value of the up and down triangel are the same
{
    for (int j = i; j < size; j++)
    {
        if(i==j)// the diogonal is 0
        {
            mat[i][j]=0;
        }
      else{
        scanf( "%d", &mat[i][j]); 
      mat[j][i]=mat[i][j];
      }
    }  
    
}
}
void printMatrix(int rows, int cols, int mat[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n"); // Newline after each row for proper formatting
    }
}

 int existPath(int from , int to , int mat[size][size]){
    if (from==to){
        return true;
    }
    if ( mat[from][to]!=0){
    return true;
}
return false;
}
void shortesPathMatrix (int mat [size][size]){
for (int k = 0; k < size; k++){

    for (int i = 0; i < size; i++){

       for (int j = 0; j < size; j++){

        if(i!=j&& mat[i][k]!=0&& mat[k][j]!=0){
            if(mat[i][j]==0||mat[i][j]>mat[i][k]+mat[k][j]) {
                 mat[i][j]=mat[i][k]+mat[k][j];
        }
       }
       } 
    }
    
}
}
int shortesPath(int from, int to, int mat [size][size]){
if (from==to)
{
    return 0;
}
if (mat[from][to]==0){
return -1;
}
shortesPathMatrix(mat);
return mat [from][to];
}
 




