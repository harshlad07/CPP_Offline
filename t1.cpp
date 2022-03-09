#include<iostream>
using namespace std;

class lad
{
	private:
		int a=10;
	protected:
		int b=12;
	public:
		int c=14;
}l1;

class lad2: public lad
{
	private:
		int a=20;
	protected:
		int b=22;
	public:
		int c=24;
		void dis()
		{
			cout<<l1.a;
		}
}l2;

int main()
{
	cout<<"\n-->"<<endl;
}
