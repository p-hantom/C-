#include <iostream>
#include <algorithm>
using namespace std;

bool canJump(int a[], int n) {
        int max=0;
        for(int i=0;i<n&&max>=i;i++){
        	if(i+a[i]>max){
        		max=i+a[i];
        	}
        }
        return max>=n-1 ? true:false;
}

int main(){
	int a1[]={2,3,1,1,4},a2[]={3,2,1,0,4};
	cout<<canJump(a1,5);
	
	return 0;
}
