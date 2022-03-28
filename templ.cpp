#include<iostream>
#include<fstream>
#include<string>
using namespace std;

template <class T, class T2>
int sum(T n1, T2 n2)
{
	T2 rs;
	rs = n1 + n2;
	return rs;
}
template <class T, class T2>
auto mul(T n1, T2 n2)
{
	T2 rs;
	rs = n1 * n2;
	return rs;
}

template <class U, class U2>
void swap(U *n1, U2 *n2)
{
	U2 *temp;
	
	temp = n1;
	n1=n2;
	n2=temp;
	
	cout<<"\nn1 = "<<*n1<<"\nn2 = "<<*n2<<endl;
}
int main()
{
	auto c=0;
	int a;
	long b;
	int A=11;
	long B=22;
	int C;
	string x="lad", y="lad2";
	cin>>a;
	cin>>b;
	
	C=sum(A,B);
	cout<<"\nSum - "<<C<<endl;
	
	c=sum(a,b);
	cout<<c<<endl;
	
	C=mul(A,B);
	cout<<"\nMul - "<<C<<endl;
	
	c=mul(a,b);
	cout<<b<<endl;
	
	swap(&a,&A);
/*	swap(&A,&B);
	cout<<x<<endl;
	cout<<y<<endl;
*/
	swap(&x,&y);
	//cout<<x<<endl;
	//cout<<y<<endl;
}
