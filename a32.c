// Write a c program fabbonacci series 
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1=0,n2=1,n3,number;
    printf("Enter the number :");
    scanf("%d",&number);
    printf("\n%d \n%d",n1,n2);
    for(int i=2;i<number;i++)
    {
        n3=n1+n2;
        printf("\n%d",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}