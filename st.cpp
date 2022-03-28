#include<iostream>
#include<fstream>

using namespace std;
template<typename t>

void f(const t &x)
{
	static int a=10;
	cout<<++a<<endl;
	return;
}
int main()
{
	f<int>(2);
	f<double>(10.1);
	f<int>(1);
	return 0;
}
