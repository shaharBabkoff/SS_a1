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
int max(int a, int b){
    if(a>=b){
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
  //  char *finItems[5]={};
 int itemIncluded[6][21]={0}; // To track included items
int k[6][21];
//int j=0;
for (int i=0;i<=numOfItems;i++){
    for ( int wi = 0; wi <= 20; wi++) {
       if(i==0||wi==0){
        k[i][wi]=0;
       }
       else if (weights[i-1]<=wi) {
        int take=value[i-1]+k[i-1][wi-(int) weights[i-1]];
        int notTake=k[i-1][wi];
    if (take>notTake){
    k[i][wi]=take;
   // finItems[j]=string[i];
    itemIncluded[i][wi]=1;
   // j++;
    }
else 
k[i][wi]=notTake;
       }
       else {
        k[i][wi]=k[i-1][wi];
       }
    }
}
 printf("Total value: %d\n", k[numOfItems][20]);

    // Backtrack to find included items
    printf("Selected items: ");
    int w = 20;
    for (int i = numOfItems-1; i >0; i--) {
        // Check if the item was included at this capacity
        if (itemIncluded[i][w]) {
            printf("%s, ", string[i - 1]); // Print the name of the included item
            w -= (int)weights[i - 1]; // Adjust weight
            if (w <= 0) break; // If no more capacity, stop
        }
    }
    printf("\n");
}





