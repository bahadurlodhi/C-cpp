#include<stdio.h>
#include<conio.h>
int main()
{
    int n,d,max,min;
    printf("Enter the Character :");
    scanf("%d",&n);
    max=n%10;
    min=n%10;
    while(n>0)
    {
        d=n%10;
        if (d>max)
           max=d;
           if(d<min)
           min=d;
           n=n/10;
    }
    printf("\n Max digit =%d",max);
    printf("\n Min digit =%d",min);
    printf("\n DiFFerent between =%d",max-min);
    return 0;
}