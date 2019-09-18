#include<iostream>
using namespace std;
int main()
{
int length,breath,area_rec=0,parameter=0;
cout<<"Enter Length and Breath of Rectangle: ";
cin>>length>>breath;
area_rec=length*breath;
parameter=2*(length+breath);
cout<<"\nArea of Ractangle: ";
cout<<area_rec;
cout<<"\nParameters of Rectangle: ";
cout<<parameter;
}
