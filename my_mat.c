#include<stdio.h>
#define SIZE 4
#define INFINITY 10000000

int mat[SIZE][SIZE];


int min(int a, int b){
    if(a<=b){
        return a;
    }
    else return b;
}

void minPath(){
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            if((!(i==j)) && (mat[i][j]==0)){
        mat[i][j]=INFINITY;
            }
        }
    } 

    for(int k=0; k<SIZE; k++){
        for(int i=0; i<SIZE; i++){
            for(int j=0; j<SIZE; j++){
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
    }

    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            if(mat[i][j] >= INFINITY){
                mat[i][j]=0;
            }
        }
    }

    
    }
    void printMatrix() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n"); // Newline after each row for proper formatting
    }
    }

void prog_1(){

for (int i = 0; i < SIZE; i++)// the value of the up and down triangel are the same
{
    for (int j = i; j < SIZE; j++)
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
minPath();

}


void prog_2(){

    int i,j;
    scanf("%d%d",&i,&j);

    if(i==j || mat[i][j]==0 ){
        printf("False\n");
    }
    else{
        printf("True\n");
    }
}



void prog_3(){

    int a,b;
    scanf("%d%d",&a,&b);

    if(a==b || mat[a][b]==0){
        printf("-1\n");
        
    }
    else {

         printf("%d\n",mat[a][b]);
}

}
void selectItems(float weights [],float value [],char *string[], int numOfItems ){
int k[6][21];
for (in i=0;i<=numOfItems;i++){
    for (int  wi = 0; wi <= 20; wi++)
    {
       if(i==0||wi==0){
        k[i][wi]=0;
       }
       else if (weights[i-1]<=wi)
       {
        k[i][wi]=max(value[i]+k[i-1][wi- weights[i]],k[i-1][wi])
       }
       
    }
    
}



}




