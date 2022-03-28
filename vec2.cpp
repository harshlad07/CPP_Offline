#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
	vector<char> v(10);
	vector<char>::iterator p;
	int i=0;
	
	p = v.begin();
	
	while(p != v.end())
	{
		*p =i+'a';
		p++;
		i++;
	}
	
	cout<<"\nOriginal content:\n";
	p=v.begin();
	v.erase(p);
	while(p!=v.end())
	{
		cout<<*p<<" ";
		p++;
	}
	
	p=v.begin();
	
	while(p!=v.end())
	{
		*p=toupper(*p);
		p++;
	}
	v.insert(p,'Z');
	v.insert(p,3,'Y');
	cout<<"\nModified content - \n";
	p=v.begin();
	while(p!=v.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	return 0;
}
