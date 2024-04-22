#include<stdio.h>
int main()
{
    int n;

    printf("input a number: ");

    scanf("%d",&n);

     if(n<0){
        printf("The number is negative\n");
     }
     else if(n>0){
        printf("The number is positive\n");
     }
     else {
        printf("The number is zero\n");
     }


    return 0;
}
