#include <iostream>
#include <algorithm>
using namespace std;

int maxSubArray(int a[], int n){
	int sum=a[0],max1=a[0];
	for(int i=1;i<n;i++){
		if(sum<0){
			sum=0;
		}
		sum+=a[i];
		if(sum>max1){
			max1=sum;
		}
	} 
	return max1;
} 

int main(){
	int a[]={-2,1,-3,4,-1,2,1,-5,4},n=9;
	cout<<maxSubArray(a,n);
	
	return 0;
}
