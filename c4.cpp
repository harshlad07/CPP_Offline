#include<iostream>
using namespace std;

class lad
{
	/*private:
		int a=30;*/
	protected:
		int b=20;
	public:
	int c;
	void lad_dis()
	{
		c=10;
		cout<<c<<endl;
	}
}l1;

class harsh: public lad
{
	public:
	void display_harsh()
	{
		cout<<l1.c<<endl;
		cout<<l1.b<<endl;
	}
	protected:
	void display_harsh1()
	{
		//cout<<l1.c<<endl;
		cout<<l1.b<<endl;
	}
}h1;

class harsh2: public harsh, public lad
{
	public:
	void display_harsh2()
	{
		cout<<l1.c<<endl;
	}
}h2;
int main()
{
	l1.lad_dis();
	h1.display_harsh();
	h1.display_harsh1();
	h2.display_harsh2();
}
