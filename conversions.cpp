#include<iostream>
using namespace std;

int DecimalToBinary(int n){
	int ans=0;
	int x=1;
	while(n>0){
		int y=n%10;
		ans+=x*y;
		x*=2;
		n=n/10;
	}
	return ans;
}
int DecimalToOctal(int n){
	int ans=0;
	int x=1;
	while (n>0){
	int y=n%10;
	ans+=y*x;
	x*=8;
	n=n/10;
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;
	cout<<DecimalToBinary(n);
	cout<<DecimalToOctal(n);
	return 0;
	
}
