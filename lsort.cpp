#include<iostream>
#include<fstream>
#include<vector>
#include<list>
#include<map>
using namespace std;

int main()
{
	list<int> l1,l2;
	int i;
	for(int i=0;i<10;i+=2)
	{
		l1.push_back(rand()%20);
	}
	for(int i=0;i<11;i+=2)
	{
		l2.push_back(rand()%20);
	}
	
	cout<<"\nContents of l1 - ";
	
	list<int>::iterator p=l1.begin();
	while(p!=l1.end())
	{
		cout<<*p<<" ";
		p++;
	}
	
	cout<<endl;
	
	cout<<"\nContents of l2 - ";
	p=l2.begin();
	
	while(p!=l2.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	
	l1.merge(l2);
	cout<<"\nMerge - ";
	p=l1.begin();
	while(p!=l1.end())
	{
		cout<<*p<<" ";
		p++;
	}
	
	l1.sort();
	l2.sort();
	p=l1.begin();
	
	cout<<"\nSorted l1 - ";
	while(p!=l1.end())
	{
		cout<<*p<<" ";
		p++;
	}
	p=l2.begin();
	cout<<"\nSorted l2 - ";
	while(p!=l2.end())
	{
		cout<<*p<<" ";
		p++;
	}
	
	
	l1.merge(l2);
	cout<<"\nMerge - ";
	p=l1.begin();
	while(p!=l1.end())
	{
		cout<<*p<<" ";
		p++;
	}
	
	if(l2.empty())
	{
		cout<<"\nEmpty\n";
	}
	cout<<endl;
	return 0;
}
