#include<iostream>
using namespace std;
class A
{
    public:
  char name[20];
  int rollno;
  float CGPA;
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
{
    A ob;
    ob.Function();
    ob.Show();
    return 0;
}