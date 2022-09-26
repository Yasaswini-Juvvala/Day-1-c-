#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter age:";
	cin>>age;
	if(age>=18)
	{
		cout<<"person is eligible to vote"<<endl;
	}
	else if(age>0&&age<18)
	{
		cout<<"you are eligible to vote after" <<18-age<< "years";
	}
	else if(age<=0)
	{
		cout<<"enter valid input"<<endl;
	}
	else
	{
		cout<<"enter valid input"<<endl;
	}
	return 0;
}
