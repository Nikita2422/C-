#include<iostream>
using namespace std;
int main()
{
int i,n,rev=0;
cin>>n;
while(n>0)
{
	
    int N=n%10;
	rev=rev*10+N;
	n=n/10;
}
cout<<rev;
return 0;
}
