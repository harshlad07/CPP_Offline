#include<iostream>
using namespace std;

class base
{
	int i,j;
	public:
		base()
		{
			cout<<"--->"<<endl;
		}
		void set(int a, int b)
		{
			i=a;
			j=b;
		}
		void show()
		{
			cout<<i<<" "<<j;
		}
};

class derived: virtual private base
{
	int k;
	public:
		derived()
		{
			cout<<"\n<--";
		}
		derived(int x)
		{
			cout<<"\n--->";
		}
		void showk()
		{
			cout<<k;
		}
};

int main()
{
	base b;
	derived ob(3);
	//ob.set(1,2);
	derived d1;
	derived d2(10);
	//ob.show();
	return 0;
}
