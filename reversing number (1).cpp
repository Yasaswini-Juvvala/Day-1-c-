#include<iostream>
using namespace std;
int main()
{
	int n,revnum=0,remainder;
	cout<<"enter an integer:";
	cin>>n;
	while(n!=0)
	{
		remainder=n%10;
		revnum=revnum*10+remainder;
		n=n/10;
	}
	cout<<"reversed number="<<revnum;
	return 0;
}
