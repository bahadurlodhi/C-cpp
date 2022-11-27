#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inch;
}
d1,d2,sum;
int main()
{
    cout<<"Enter the 1st Distance:"<<endl;
    cout<<"Enter the feet:"<<endl;
    cin>>d1.feet;
    cout<<"Enter the inches:"<<endl;
    cin>>d1.inch;
    cout<<"Enter the 2nd Distance:"<<endl;
    cout<<"Enter the feet:"<<endl;
    cin>>d2.feet;
    cout<<"Enter the inches:"<<endl;
    cin>>d2.inch;
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
     if(sum.inch>12)
{
    int extra=sum.inch/12;
    sum.feet=+extra;
    sum.inch=-(extra*12);
}
cout<<endl<<"Sum of Distance ="<<"{"<<sum.feet<<" feet"<<"}"<<"{"<<sum.inch<<" inch"<<"}";
return 0;
}