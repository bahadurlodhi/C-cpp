#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,count=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
        count++;
    }
    printf("\n\n Sum OF all digit %d ",sum);
    printf("\n\n Total digit %d",count);
    return 0;
}