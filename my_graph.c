#include<stdio.h>
#include<math.h>
#include"my_mat.h"
#define SIZE 10

int main(){

    char c;
printf("Enter type function: ");
scanf("%c",&c);
    while(c!='D'){

        if(c =='A'){

            prog_1();
             printMatrix();
        }
        else if(c =='B'){

            prog_2();
        }
        else if(c =='C'){
            
            prog_3();
        }
        scanf("%c",&c);
    }













    return 0;

}
