#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10], index,n,i;
    char ch;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("\nEnter the elements of array : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(1){
        if(n<0){
            printf("Array underflow");
            exit(0);
        }else{
            printf("\nEnter the index to delete");
            scanf("%d",&index);
            for(i=index;i<n;i++){
                a[i]=a[i+1];
            }n--;
            printf("\nNew array : ");
            for(i=0;i<n;i++)
                printf("%d",a[i]);   
            printf("Do you want to delete more elements");
            scanf("%c",&ch);
            if(ch=='n'||ch=='N')
                break;
        }
    }
}