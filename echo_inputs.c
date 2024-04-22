#include<stdio.h>
int main()
{
    char echo[15];
    scanf("%s",&echo);
    for(int i=1; i<=3; i++){
        printf("%s ",echo);
    }
    return 0;
}
