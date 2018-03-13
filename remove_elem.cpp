#include <iostream>
using namespace std;

int removeElement(int a[], int n, int elem) {
        int left=0,end=n-1;
        while(left!=end){
        	if(a[left]==elem){       		
        		int temp=a[left];
        		a[left]=a[end];
        		a[end]=temp;
        		
        		end--;       		
        	}
        	else{
        		left++;
        	}
        	
        }      
		if(a[end]==elem){
			return end;
		} 
        return end+1;
}

int main(){
	int elem=2;
	int a[]={2},n=1,i;
	int len=removeElement(a,n,elem);
	for(i=0;i<len;i++){
		cout<<a[i]<<endl; 
	}
	
	return 0;
}
