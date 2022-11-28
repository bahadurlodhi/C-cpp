#include<stdio.h>
int main()
{
    int ndays,y,m,d;
    printf("Enter the days:");
    scanf("%d",&ndays);
    y=ndays/365;
    ndays=ndays-(365*y);
     m=ndays/30;
    d=ndays-(m*30);
    printf("%d years \n%d months \n%d days",y,m,d);
    return 0;
}