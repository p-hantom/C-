#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int cnt=0,mul=1,mul2=1;
	for(int i=2;i<=20;i++){
		mul*=i;
		mul2*=i;
		cout<<mul<<endl;
		while(mul%10==0){
			cnt++;
			mul/=10;
			cout<<mul<<endl;
		}
	}
	cout<<cnt<<endl;
	cout<<"mul2="<<mul2<<endl;
	
	return 0;
}
