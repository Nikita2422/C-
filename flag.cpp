#include<iostream>
using namespace std;
int main()
{
	int flag=true;
	for(int i=0;i<=10;i++){
		if(flag==true){
			cout<<i<<endl;
			flag=false;
		}else if(flag==false){
			flag=true;
		}
	}
	return 0;
} 
