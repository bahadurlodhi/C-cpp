#include<iostream>
using namespace std;
class A
{
  char name[20];
  int rollno;
  float CGPA;
  public:
  void Function()
  {
   cout<<"Enter the student Name:";
   cin>>name;
   cout<<"Enter the student roll number:";
   cin>>rollno;
   cout<<"Enter the student CGPA:";
   cin>>CGPA;
  }
  void Show()
  {
    cout<<"\n The Student name is -->"<<name<<endl;
    cout<<"Student roll number is -->"<<rollno<<endl;
    cout<<"Student CGPA is -->"<<CGPA<<endl;
  }
};
int main()
{   int ch;
 A a;
  do{

     cout<<"All inFormation"<<endl;
  cout<<"1.Student details"<<endl;
  cout<<"2. Show Student detail"<<endl;
  cout<<"3. Exit "<<endl;
   cout<<"\nEnter Your Choice: ";
    cin>>ch;
    cout<<endl;
switch(ch)
{
 case 1:
 a.Function();
 break;

 case 2:
 a.Show();
 break;

 case 3:
 exit(0);
 break;

 default:
 cout<<"Invalid choice"<<endl;
}

  }
  while(ch!=4);
    return 0;
}