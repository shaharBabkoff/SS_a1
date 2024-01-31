#ifndef _MY_MAP_H_
#define _MY_MAP_H_
#define size 4

void getValueOfMat( int  mat [size][size] );

int existPath(int from , int to, int mat [size][size]); 

int shortesPath(int from, int to, int mat [size][size]);

void printMatrix(int rows, int cols, int mat[size][size]);


#endif