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

class b : virtual public c
{
	public:
		void display_b()
		{
			//int a2;
			cout<<"\nClass B";
		}
}b1;

class a: public virtual c
{
	public:
		void display_a()
		{
			//int a3;
			cout<<"\nClass A";
		}
}a1;

class d: public a, public b
{
	public:
		void display_d()
		{
			//int a3;
			cout<<"\nClass D";
		}
}d1;

int main()
{
	c1.display_c();
	
	a1.display_a();
	a1.display_c();
	a1.display_a();
	
	b1.display_b();
	b1.display_c();
	
	d1.display_d();
	d1.display_b();
	d1.display_a();
	d1.display_c();
	
	return 0;
}
