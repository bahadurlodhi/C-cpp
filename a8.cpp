#include<iostream>
using namespace std;
void halfPyramid();
void invertedHalfPyramid();
int main()
{
    int ch;
    do
    {
        cout<<"1. Print Half Pyramid of Stars\n";
        cout<<"2. Print Inverted Half Pyramid of Stars\n";
         cout<<"Enter the Choice: ";
          cin>>ch;
        switch(ch)
        {
            case 1:
                halfPyramid();
                break;
            case 2:
                invertedHalfPyramid();
                break;
                default:
                cout<<"\nWrong Choice!";
                break;
                  }
    }while(ch>=1 && ch<=4);
    cout<<endl;
    return 0;
}
void halfPyramid()
{
    int i, j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<=i; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
}
void invertedHalfPyramid()
{
    int i, j;
    for(i=0; i<6; i++)
    {
        for(j=i; j<6; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
}