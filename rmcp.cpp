#include<iostream>
#include<fstream>
#include<vector>
#include<list>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
	char s[]="I'm emotional";
	vector<char> v,v2(30);
	
	int i;
	for(int i=0; s[i]; i++)
	{
		v.push_back(s[i]);
	}
	
	cout<<"\nInput - ";
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	
//	remove_copy(v.begin(), v.end(), v2.begin(), ' ');
	replace_copy(v.begin(), v.end(), v2.begin(), ' ', ':');
	cout<<"\nResult - \n";
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i];
	}
	cout<<endl;
	return 0;
}
