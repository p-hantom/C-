#include <iostream>
using namespace std;

int removeDuplicates(int a[], int n) {
	if(n<=0){
		return 0;
	}
	int len=0,i;
	for(i=0;i<n-1;i++){
		if(a[i]==a[i+1]){
			
		}
	}
}

int main(){
	int a[]={1,1,2,3},n=4,i;
	int len=removeDuplicates(a,n);
	for(i=0;i<len;i++){
		cout<<a[i]<<endl; 
	}
	
	return 0;
}
