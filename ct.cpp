#include<iostream>
#include<fstream>

using namespace std;

template <class t1, class t2>
class s
{
	t1 a;
	t2 b;
	public:
		void gd()
		{
			cout<<"\nEnter a and b"<<endl;
			cin>>a>>b;
		}
		void d()
		{
			cout<<"a - "<<a<<"\tb - "<<b<<endl;
		}
};

int main()
{
	s<int,int>s1;
	s<int, double>s2;
	s<double, double>s3;
	
	cout<<"\nData - "<<endl;
	s1.gd();
	s1.d();
	
	cout<<"\nS2 data - "<<endl;
	s2.gd();
	s2.d();
	
	cout<<"\nS3 Data - "<<endl;
	s3.gd();
	s3.d();
	return 0;
}
