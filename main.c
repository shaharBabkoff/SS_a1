#include <stdio.h>
#include "my_mat.h"



int main() {

int matrix [size][size]={0};
char type;
    printf("Enter type function: ");
    scanf(" %c", &type);
    if(type=='D'){
       return 0;
 }
    while (type!='D')
    {
      if (type=='A'){
          getValueOfMat(matrix);
          printMatrix(size,size,matrix);
        }
        
else if (type=='B'){
    int from;
    int to;
    printf("chack the path from: ");
    scanf("%d", &from);
    printf("chack the path to: ");
    scanf("%d", &to);
    printf("there is a path:%d.\n ",(existPath(from,to,matrix)));
    
}
else if (type=='C')
{
    int from;
    int to;
    printf("chack the path from: ");
    scanf(" %d", &from);
    printf("chack the path to: ");
    scanf(" %d", &to);
    printf("the shortpath:%d \n",(shortesPath(from,to,matrix)));
}
else{
  printf("invalid input please enter A,B,C,D.\n");
}
printf("Enter type function: ");
  scanf(" %c", &type);
}
return 0; 
}