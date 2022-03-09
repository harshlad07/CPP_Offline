#include<iostream>
using namespace std;

class c
{
public: 
	void display_c()
	{
		//int a;
		cout<<"\nClass C";
	}
}c1;
class b :public c
{
public:
	void display_b()
	{
		//int a2;
		cout<<"\nClass B";
	}
}b1;
class a :public b
{
public:
	void display_a()
	{
		//int a3;
		cout<<"\nClass A";
	}
	//int a3;
	//cout<<"\nClass C";
}a1;

int main()
{
	c1.display_c();
	c1.display_c();
	c1.display_c();
	
	a1.display_a();
	a1.display_a();
	a1.display_a();
	
	b1.display_b();
	b1.display_b();
	b1.display_b();	
	
	return 0;
}
