#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=0;
	for(int i=1;i<n;i++){
		if(abs(a[i]-a[i-1])>max){
			max=abs(a[i]-a[i-1]);
		}
	}
	cout<<max<<endl;
	
	return 0;
}
