//write a c program to find smallest element among row and column insert those elements to an extra 
//row and column of the matrix. Use function calling with argument passing to read, find, print the whole 
//operation of the matrix
#include<stdio.h>
void read(int a[100][100], int row, int col){
    int i, j;
    printf("Enter the elements of matrix");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void print(int a[100][100],int row,int col){
    int i, j;
    printf("\n");
    for(i=0;i<=row;i++){
        for(j=0;j<=col;j++){
            printf("%d ",a[i][j]);
        }printf("\n\n");
    }printf("\n");
}
void find(int a[100][100], int row, int col){
    int i, j, k, temp;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            for(k=j+1;k<col;k++){
                if(a[i][j]>a[i][k]){
                    temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }a[i][k] = a[i][0];
    }
    for(i=0;i<=col;i++){
        for(j=0;j<row;j++){
            for(k=j+1;k<row;k++){
                if(a[i][j]>a[i][k]){
                    temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }a[col][i] = a[0][i];
    }
}
int main(){
    int row, col;
    int a[100][100];
    printf("Enter the number of rows and columns");
    scanf("%d%d",&row,&col);
    read(a,row,col);
    find(a,row,col);
    print(a,row,col);
}