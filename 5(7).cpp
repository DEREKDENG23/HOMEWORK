#include<iostream>
using namespace std;
float func(float s,int v)
{
	float t;
	if (1==v)
		t=s;
	else if (0==v)
		t=1;
	else
		t=s*func(s,v-1);
	return t;
}
void main()
{
	float x,int y;
  cout<<"please input the x and y"<<endl;
  cin>>x>>y;
  cout<<func(x,y)<<endl;
}