#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,n,sum=0;
	cin>>n;
	int oc=n;
	while(n>0)
	{
		int N=n%10;
		sum=sum+pow(N,3);
		n=n/10;
	}
	if(sum==oc){
		cout<<"armstrong number";
	}else{
		cout<<"not an armstrong number";
	}
	return 0;
}

