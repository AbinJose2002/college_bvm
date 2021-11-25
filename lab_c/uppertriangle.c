// leo sebastian is a killadi
#include<stdio.h>
int main(){
    int i, j, row, column, flag = 0;
    printf("Enter the number of rows and columns");
    scanf("%d%d",&row,&column);
    int a[10][10];
    printf("Enter the elements of matrix");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<i;j++){
            if(a[i][j]!=0){
                flag = 1;
            }
        }
    }
    if(flag == 1){
        printf("Matrix is not upper triangle");
    }else{
        printf("Matrix is upper triangle ");
    }
}