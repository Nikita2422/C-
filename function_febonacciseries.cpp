#include<iostream>
using namespace std;

void fib(int n)
{
	int a=1,b=1,c;
	for(int i=0;i<=n;i++)
	{
		cout<<a<<"\t";
		c=a+b;
		a=b;
		b=c;
	}
}

int main()
{
	int n;
	cin>>n;
	fib(n);
	return 0;
}
