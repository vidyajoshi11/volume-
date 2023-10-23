#include<iostream>
using namespace std;
int volume(int l)
{
return (l*l*l);
}
double volume(double r,double h)
{
 return (3.14*r*r*h);
}
long volume(int l,int b,int h)
{
 return (l*b*h);
}
int main()
{
cout<<"Volume of Cube :"<<volume(9)<<endl;
cout<<"Volume of Cylinder :"<<volume(10.2,5.5)<<endl;
cout<<"Volume of Box :"<<volume(9,4,6)<<endl;
}
