#include<iostream>
using namespace std;
float degree(float c)
{
  float f;
  f=9.0/5*c+32;
  return f;
}
void main()
{
	float c;
	cout<<"please input the centigrade"<<endl;
	cin>>c;
	cout<<degree(c)<<endl;
}