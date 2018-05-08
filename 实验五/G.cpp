#include <iostream>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int a[100][100];
	int temp=0,i=0,j=0;
	a[0][0]=1;
	for(int k=1;k<=m*n;k++){
		a[i][j]=k;
		int t=i+j;
		if(t%2==0){
			if(j==n-1){
				i++;
			}
			else if(i==0&&j!=n-1){
				j++;
			}
			else{
				i--;j++;
			}			
		}
		else{
			if(i==m-1){
				j++;
			}
			else if(i!=m-1&&j==0){
				i++;
			}
			else{
				i++;j--;
			}		
		}		
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
