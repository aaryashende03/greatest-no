#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cout<<"enter the 1 no ="<<endl;
	cin>>a;
	
	cout<<"enter the 2 no ="<<endl;
	cin>>b;
	
	cout<<"enter the 2 no ="<<endl;
	cin>>c;
	
	if(a>=b && a>=c)
	{
		cout<<"a is the the greatest"<<endl;
	}
	
	else if(b>=c && b>=a)
	{
		cout<<"b is the greatest"<<endl;
	}
	else
	{
		cout<<"c is the greatest"<<endl;
	}
	return 0;
}