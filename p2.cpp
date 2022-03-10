#include<iostream>
using namespace std;

class lad
{
	public:
		void s()
		{
			cout<<"\nABC"<<endl;
		}
};

class harsh : public lad
{
public:
	void sh()
	{
		cout<<"\nEFG"<<endl;
	}
};

int main()
{
	harsh h1;
	lad* ptr;
	ptr=&h1;
	
	ptr->s();
	//ptr->sh();
	((harsh*)ptr)->sh();
}
