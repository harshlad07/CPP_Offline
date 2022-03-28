#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

class dp
{
	int temp;
	public:
		dp()
		{
			temp=0;
		}
		dp(int x)
		{
			temp=x;
		}
		dp &operator=(int x)
		{
			temp=x;
			return *this;
		}
		double get_temp()
		{
			return temp;
		}
};

bool operator<(dp a, dp b)
{
	return a.get_temp()<b.get_temp();
}
bool operator==(dp a, dp b)
{
	return a.get_temp()==b.get_temp();
}
int main()
{
	vector<dp> v;
	int i;
	for(int i=0;i<7;i++)
	{
		v.push_back(dp(60+rand()%30));
	}
	
	cout<<"\nFarenheit tep - \n";
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].get_temp()<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<v.size();i++)
	{
		v[i]=(v[i].get_temp()-32)* 5/9;
	}
	
	cout<<"Centtid]grade temp - \n";
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].get_temp()<<" ";
	}
	cout<<endl;
	return 0;
}
