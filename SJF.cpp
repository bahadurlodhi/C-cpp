#include<iostream>
using namespace std;
int main(){
    int p;
    cout<<"Enter the number of process : ";
    cin>>p;
    cout<<"Enter the Burst time ";
    int BT[p];
    for(int i=0;i<p;i++)
    {
        cout<<"P"<<i+1<<" Burst time : ";
        cin>>BT[i];
    }
    for(int i=0;i<p-1;i++)
    {
        for(int j=0;j<p-i-1;j++)
        {
                if(BT[j]>BT[j+1])
                {
                    int temp=BT[j];
                    BT[j]=BT[j+1];
                    BT[j+1]=temp;
                }
        }
    }
    int CT[p];
    int tmp=0;
    for(int i=0;i<p;i++)
    {
        tmp=tmp+BT[i];
        CT[i]=tmp;
    }
    int WT=0;
    for(int i=0;i<p-1;i++)
    {
        WT=WT+CT[i];
    }
    cout<<"The CP is"<<CT[3]<<endl;
cout<<"The total wating time is : "<<WT<<endl;
cout<<"The Average wating time is : "<<WT/p<<endl;
 
return 0;
}
