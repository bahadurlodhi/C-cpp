#include<iostream>
using namespace std;
class A
{
   int n, reversed = 0, remainder, original;
  public:
  void Function()
  {
        printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;
 
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
        printf("\n%d is a palindrome\n", original);
    else
        printf("\n %d is not a palindrome \n", original);
  }
};
int main()
{   int ch;
 A a;
  do{
  cout<<"<--Show the result-->"<<endl;
  cout<<"1.Run the program"<<endl;
  cout<<"2. Exit "<<endl;
   cout<<"\nEnter Your Choice: ";
    cin>>ch;
    cout<<endl;
switch(ch)
{
 case 1:
 a.Function();
 break;
 
  case 2:
 exit(0);
 break;

 default:
 cout<<"Invalid choice"<<endl;
}

  }
  while(ch!=4);
    return 0;
}