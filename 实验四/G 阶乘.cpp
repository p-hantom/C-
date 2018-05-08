#include <iostream>
using namespace std;

void f(int x){
	int res=1;
	for(int i=2;i<=x;i++){
		res*=i;
		while(res%10==0){
			res/=10;
		}
		res=res%10;
	}
	cout<<res<<endl;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		f(x);
	} 
	
	return 0;
}
