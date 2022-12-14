#include<iostream>
using namespace std;
class student
{
    public:
    int age;
    string name;
   void getdata()
   {
    cout<<"Enter the student name is :"<<endl;
    cin>>name;
    cout<<"Enter the student age is :"<<endl;
    cin>>age;
   }
   void showdata()
   {
    cout<<"\nStudent name is "<<name;
    cout<<"\nStudent age is "<<age;
   }
};
class Exam :public student
{
    public:
    char sub1,sub2,sub3,sub4,sub5,sub6;
     int m1,m2,m3,m4,m5,m6;
     void getdata1()
     {
        cout<<"\n Enter the first subject name ";
        cin>>sub1;
        cout<<"\n Enter the second subject name ";
        cin>>sub2;
        cout<<"\n Enter the third subject name ";
        cin>>sub3;
        cout<<"\n Enter the fourth subject name ";
        cin>>sub4;
        cout<<"\n Enter the fifth subject name ";
        cin>>sub5;
        cout<<"\n Enter the sixth subject name ";
        cin>>sub6;
     }
     void showdata1()
     {
        cout<<"\n Enter the marks of ,"<<sub1<<":";
        cin>>m1;
        cout<<"\n Enter the marks of ,"<<sub2<<":";
        cin>>m2;
        cout<<"\n Enter the marks of ,"<<sub3<<":";
        cin>>m3;
        cout<<"\n Enter the marks of ,"<<sub4<<":";
        cin>>m4;
        cout<<"\n Enter the marks of ,"<<sub5<<":";
        cin>>m5;
        cout<<"\n Enter the marks of ,"<<sub6<<":";
        cin>>m6;
     }
};
class Result:public Exam
{
 public:
 int sum;
 void result()
 {
    sum=m1+m2+m3+m4+m5+m6;
    cout<<sum<<endl;
 }
};
int  main()
{
     Result s;
    s.getdata();
    s.showdata();
    s.getdata1();
    s.showdata1();
    s.result();
    return 0;
}