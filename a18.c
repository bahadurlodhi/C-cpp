#include<stdio.h>
#include<conio.h>
void main()
{
    
char gen; 
int age; 

printf("Enter Your Gender, M for Male and F for Female");
scanf("%c",& gen);

printf("Enter Your Age");
scanf("%i\n",& age);

if(age > 16 && gen == 'F' || age > 16 && gen == 'f' )
 {
 printf("Female is genius");
 }

else if(age > 16 && gen == 'M' || age > 16 && gen == 'm' )
 {
 printf("Male have to do more effort");
 }
}