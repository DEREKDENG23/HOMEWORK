#include<iostream>
using namespace std;
int fac(int n)
{
	int t;
	if (1==n)
		t=1;
	else
		t=n*fac(n-1);
	return t;
}
void main()
{
	int n,m;
	cout<<"please input the n and m"<<endl;
	cin>>n>>m;
	if (n>m)
		cout<<"ERROR"<<endl;
	else if (0==n||0==m)
		cout<<1<<endl;
	else
		cout<<fac(m)/fac(n)/fac(m-n)<<endl;
}