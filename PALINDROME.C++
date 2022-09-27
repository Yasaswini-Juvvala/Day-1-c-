#include<iostream>
using namespace std;
int main()
{
	string a,b;
	cout<<"enter the string:";
	cin>>a;
	for(int i=a.size()-1;i>=0;i--)
	{
		b+=a[i];
	}
	if(a==b)
	cout<<"the entered word is palindrome!!";
	else
	cout<<"the entered word is not palindrome!!";
}