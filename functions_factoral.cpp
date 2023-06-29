#include<iostream>
using namespace std;

void fact(int num){
	int ans=1;
	for(int i=1;i<=num;i++)
	{
		ans*=i;
	}
	cout<<ans;
}
int main()
{
int n;
cin>>n;
 fact(n);
 return 0;
}
