#include<stdio.h>
#include<conio.h>
int main()
{
    int N,FD,LD;
    printf("Enter the number :");
    scanf("%d",&N);
    FD=N%10;
    while(N>=10)
    {
        N=N/10;
    }
    LD=N;
    printf("<-----THE RESULT IS------>");
    printf("Sum oF First and Last digit %d",FD+LD);
    return 0;
}