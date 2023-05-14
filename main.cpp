#include<iostream>
using namespace std;
int main()
{
    int line;
    cout<<"Enter the number"<<endl;
    cin>>line;
    int mid=(line-1)/2;
    int last=line-1;
    for(int i=0;i<line;i++)
    {
        for(int j=0;j<line;j++)
        {
            if(i==mid||j==mid||(i<mid && j==0)||(i>mid && j==last) || (j<mid && i==last)||(j>mid && i==0))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}