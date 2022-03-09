#include<iostream>
using namespace std;

class fuel
{
	public: 
		void display_fuel()
		{
			//int a;
			cout<<"\nClass fuel";
		}
}c1;

class lqd 
{
	public:
		void display_lqd()
		{
			//int a2;
			cout<<"\nClass lqd";
		}
}b1;

class petrol: public fuel,  public lqd
{
	public:
		void display_petrol()
		{
			//int a3;
			cout<<"\nClass petrol";
		}
}a1;

int main()
{
	c1.display_fuel();
	c1.display_fuel();
	c1.display_fuel();
	
	a1.display_petrol();
	a1.display_fuel();
	a1.display_lqd();
	
	b1.display_lqd();
	b1.display_lqd();
	b1.display_lqd();
	
	return 0;
}
