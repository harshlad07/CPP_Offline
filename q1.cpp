#include<iostream>
using namespace std;

class b1
{
	protected:
		int i;
	public:
		b1(int x)
		{
			i=x;
			cout<<i<<endl;
		}
		~b1()
		{
			cout<<"\nDestructung b1"<<endl;;
		}
};

class b2
{
	protected:
		int k;
	public:
		b2(int x)
		{
			k=x;
			cout<<k<<endl;
		}
		~b2()
		{
			cout<<"Destructing b2"<<endl;
		}
};

class dr: public b1, public b2
{
	int j;
public:
	dr(int x, int y, int z): b1(y), b2(z)
	{
		j= x;
		cout<<"\nConstructing dr"<<endl;
	}
	~dr()
	{
		cout<<"Destrucing dr"<<endl;;
	}
	void show()
	{
		cout<<i<<j<<k<<endl;
	}
};

int main()
{
	dr ob(3,4,5);
	ob.show();
	return 0;
}
