#include<iostream>
#include<fstream>

using namespace std;

template <class t, int n>
class sq
{
	t mb[n];
	public:
		void sm(int x, t v);
	t gm(int x);
};

template <class t, int n>
void sq<t,n>::sm(int x, t v)
{
	mb[x] = v;
}
template <class t, int n>
t sq<t,n>::gm(int x)
{
	return mb[x];s
}
int main()
{
	const int a=10;
	//cin>>a;
	sq<int,a> mt;
	sq<double,5> mt2;
	mt.sm(0,100);
	mt2.sm(3,3.14);
	
	cout<<mt.gm(0)<<endl;
	cout<<mt2.gm(3)<<endl;
}
