#include<iostream>
using namespace std;

class ABC
{
	public:
		void setProMeb(int i)
		{
			int m_proMeb = i;
		}
		void Display()
		{
			cout<<m_protMeb;
		}
	protected:
		int m_protMeb;
		void protFun()
		{
			cout<<"\nAccess allowed\n";
		}
};

class XYZ : public ABC
{
	public:
		void useprotFun()
		{
			protFun();
		}
};

int main()
{
	ABC a;
	XYZ x;
	a.m_protMeb;
	a.setProMeb(0);
	a.Display();
	a.protFun();
	x.setProtMeb(5);
	x.Display();
	x.useprotFun();
}
