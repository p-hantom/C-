#include <iostream>
using namespace std;

int main(){
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		//cout<<a[i]<<endl;
	}
//	int a[100],n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
	for(int i=0;i<n-1;i++){
		int k=i;
		for(int j=i+1;j<n;j++){
			if(a[k]>a[j]){
				k=j;
			}
		}
		if(i!=k){
			int temp=a[k];
			a[k]=a[i];
			a[i]=temp;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
