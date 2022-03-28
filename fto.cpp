#include<iostream>
#include<fstream>

using namespace std;

template<class t>
int s(t a, t b, t c)
{
	return (a+b+c);
}

template<class t, class t2>
int s(t a, t2 b, t c)
{
	return (a+b+c);
}
void s(int a, int b)
{
	cout<<"\nSum - "<<a+b<<endl;
}
int main()
{
	int x, a;
	double y,b;
	long z,c;
	
	cin>>a;
	cin>>b;
	cin>>c;
	
	x = s(a,a,a);
	y = s(a,c,a);
	z = s(a,b);
	
	cout<<endl;
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
	return 0;
}
