#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	bool flag;
	for(int i=2;i<n;i++){
		if(i%n==0){
			cout<<"non prime";
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"prime";
	}
	return 0;
}
