#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
	vector<char> v(10);
	int i;
	
	cout<<"\nSize = "<<v.size()<<endl;
	
	for(int i=0;i<10;i++)
	{
		v[i]=i+'a';
	}
	
	cout<<"\nCurrent location:\n";
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<"\nNow expanding- "<<endl;
	
	for(int i=0;i<10;i++)
	{
		v.push_back(i+10+'a');
	}
	
	cout<<"\nSize now - "<<v.size()<<endl;
	
	cout<<"\nCurrent content\n";
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<v.size();i++)
	{
		v[i]=toupper(v[i]);
	}
	cout<<"\nModified Contents\n";
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}
