//Write a c program to calculate factorial number 
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,n,fact=1;
    printf("Enter the number for find factorial:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    fact= fact*i;
    printf("Factorial of %d : is %d",n,fact);
    return 0;
}