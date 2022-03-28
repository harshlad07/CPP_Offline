#include<iostream>
#include<fstream>
#include<string.h>
#include<vector>
#include<list>
#include<map>
using namespace std;


class n
{
	char s[40];
	public:
		n()
		{
			strcpy(s, "");
		}
		n(char *s2)
		{
			strcpy(s,s2);
		}
		char *get()
		{
			return s;
		}
};

bool operator<(n a, n b)
{
	return strcmp(a.get(), b.get())<0;
}

class phn
{
	char str[80];
	public:
		phn()
		{
			strcmp(str,"");
		}
		phn(char *s)
		{
			strcpy(str,s);
		}
		char *get()
		{
			return str;
		}
};

int main()
{
	map<n, phn> m;
	
	m.insert(pair<n, phn>(n("Lad"), phn("555-222")));
	m.insert(pair<n, phn>(n("Zilean"), phn("555-666")));
	m.insert(pair<n, phn>(n("Brimstone"), phn("555-777")));
	m.insert(pair<n, phn>(n("Jett"), phn("555-888")));
	m.insert(pair<n, phn>(n("Reyna"), phn("555-999")));
	
	char sr[80];
	
	cout<<"\nEnter name - ";
	cin>>sr;
	
	map<n,phn>::iterator p;
	p=m.find(n(sr));
	
	if(p!=m.end())
	{
		cout<<"\nPhone number - "<<p->second.get()<<endl;
	}
	else
	{
		cout<<"\nName not in map"<<endl;
	}
	return 0;
}
