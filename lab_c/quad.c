#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    float root1, root2, disc;
    printf("Enter a, b, c");
    scanf("%d%d%d",&a,&b,&c);
    disc = b*b-4*a*c;
    if(disc==0){
        root1 = root2 = -b/2*a;
        printf("Roots are real and equal\nRoot1 = %f\nRoot2 = %f",root1,root2);
    }else if(disc<0){
        root1 = -b/2*a;
        root2 = sqrt(-disc)/2*a;
        printf("Roots are imaginary\n%f +- %fi",root1,root2);
    }else{
        root1 = (-b + sqrt(disc))/2*a;
        root2 = (-b - sqrt(disc))/2*a;
        printf("Roots are real and different\nRoot1 = %f\nRoot2 = %f",root1,root2);
    }   
    return 0;
}