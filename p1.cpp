#include<iostream>
using namespace std;

class d
{
	int i;
	public:
		d(int x)
		{
			i=x;
		}
		int getd()
		{
			return i;
		}
};

int main()
{
	d d1(55), *ptr;
	
	ptr = &d1;
	
	cout<<ptr->getd();
	return 0;
}
