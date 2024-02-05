#include<stdio.h>
#include<math.h>
#include"my_mat.h"
#define SIZE 4

int main(){

    char c;
scanf("%c",&c);
    while(c!='D'){

        if(c =='A'){

            prog_1();
         //    printMatrix();
        }
        else if(c =='B'){

            prog_2();
        }
        else if(c =='C'){
            
            prog_3();
        }
        scanf("%c",&c);
    }

 char  strings[5] = {};
for ( int i = 0; i < 5; i++)
{
  char c;
printf("enter the item's names");
scanf("%c",&c);
strings[i]=c;

}

float  values[5] = {};
for ( int i = 0; i < 5; i++)
{
  float c;
printf("enter the item's values");
scanf("%f",&c);
values[i]=c;

}
float  weights[5] = {};
for ( int i = 0; i < 5; i++)
{
  float c;
printf("enter the item's weights");
scanf("%f",&c);
weights[i]=c;


selectItems(weights,values,*strings,5);











    return 0;

}
