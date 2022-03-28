#include<iostream>
#include<fstream>
#include<vector>
#include<list>
using namespace std;

int main()
{
	list<int> ls;
	int i;
	
	for(int i=0;i<10;i++)
	{
		ls.push_back(i);
	}
	
	cout<<"\nSize = "<<ls.size();
	cout<<"\nContents -";
	
	list<int>::iterator p = ls.begin();
	
	while(p!=ls.end())
	{
		cout<<*p<<" ";
		p++;
	}
	
	cout<<"\n";
	p=ls.begin();
	
	while(p!=ls.end())
	{
		*p = *p+100;
		p++;
	}
	
	cout<<"\nContent modified: ";
	
	p=ls.begin();
	
	while(p!=ls.end())
	{
		cout<<*p<<" ";
		p++;
	}
	
	cout<<"\nReverse order - ";
	while(p!=ls.begin())
	{
		p--;
		cout<<*p<<" ";
	}
	cout<<endl;
	return 0;
}
