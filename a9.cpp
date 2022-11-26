#include<iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;
public:
   void getdist()
   {
    cout<<"\n Enter the feet  :";
    cin>>feet;
    cout<<"\n Enter the inches :";
    cin>>inches;
   }
   void showdist()
   {
    cout<<feet<<endl;
    cout<<inches<<endl;
   }
};
int main()
{
    Distance dist;
    dist.getdist();
    dist.showdist();
    return 0;
}
