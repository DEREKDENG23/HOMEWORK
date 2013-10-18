//安全数组
#include<iostream>
using namespace std;
class Array
{
	private:
		int* data;
		int max;
	public:
		Array(int cap)
		{
			this->data=(int*)malloc(cap*sizeof(int));
			this->max=cap;
			for(int i=0;i<max;i++)
				data[i]=NULL;
		}
		void set(int index,int value)
		{
			if(index<max)
				data[index]=value;
			else
				cout<<"超出数组长度，不合法";
		}
		void get(int index)
		{ 
			if(index<max)
				cout<<data[index];
			else
				cout<<"超出数组长度，不合法";
		}
};
void main()
{
	Array array=Array(10);
	array.set(2,10);
	array.get(1);
	
}