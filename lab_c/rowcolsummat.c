#include<stdio.h>
int main(){
    int b[10], a[10][10], r, c,temp,i,j,x,y;
    printf("Enter row n col");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of matrix");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("enter the element of a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
        printf("sorting of rows\n");

        for ( i = 0; i < r; i++)
        {
            for ( j = 0; j < c; j++)
            {
                b[j] = a[i][j];
            }
                for(y=0;y<c;y++){
                if(b[y]>b[y+1]){
                    temp = a[y];
                    a[y] = a[y+1];
                    a[y+1] = temp;
                    }
                }
            
        }
         for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

