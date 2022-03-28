#include<iostream>
#include<fstream>
#include<vector>
#include<list>
#include<map>
using namespace std;

int main()
{
	map<char, int> m;
	int i;
	
	for(i=0;i<26;i++)
	{
		m.insert(pair<char,int>('A'+i, 65+i));
	}
	
	for(i=0;i<26;i++)
	{
		m.insert(pair<char,int>('a'+i, 97+i));
	}
	
	char ch;
	cout<<"\nEnter key : ";
	cin>>ch;
	
	map<char,int>::iterator p;
	
	p=m.find(ch);
	if(p!=m.end())
	{
		cout<<"\nIts ASCII value is - "<<p->second<<endl;
	}
	else
	{
		cout<<"\nKey not found\n";
	}
	
	return 0;
}
