#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,a[10];
    system ("cls");  
    printf("Enter the number :");
    scanf("%d",&n);
    for (i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("Binary oF given number is = ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
    
}