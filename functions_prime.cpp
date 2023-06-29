#include<iostream>
using namespace std;
bool prime(int n){
	bool flag;
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
			flag==true;
		}
	}
	if(flag==false){
	return true;
}
}
int main()
{
int a,b,i;
cin>>a>>b;	
	for(i=a;i<=b;i++){
		if(prime(i)){
			cout<<i<<endl;
		}
	}
	return 0;	
}
