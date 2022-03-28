#include<iostream>
#include<fstream>

using namespace std;

template <class x>
void s(x &a, x &b)
{
	x temp;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<endl;
	cout<<b<<endl;
}
void s(int &a, int &b)
{
	int temp;
	temp =a;
	a=b;
	b=temp;
	cout<<a<<endl;
	cout<<b<<endl;
}
int main()
{
	int y=10,z=20;
	double a=1,b=10;
	s(y,z);
	s(a,b);
}
