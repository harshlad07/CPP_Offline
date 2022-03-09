#include<iostream>
using namespace std;

class a
{
	public:
		void display()
		{
			cout<<"\n-->";
		}
}a1;

class XYZ: public ABC
{
	public:
		void display()
		{
			cout<<"\n<--";
		}
};

int main()
{
	XYZ x;
	x.display;
	x.a1::display();
}
