#include <iostream>
using namespace std;

int main(){
	int n,m,p,q,a[1000];//n¸öÑ§Éú 
	cin>>n>>m;
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	for(int i=0;i<m;i++){
		cin>>p>>q;
		int num=0;
		while(a[num]!=p){
			num++;
		}
		if(q>0){
			for(int j=0;j<q;j++){
				int temp=a[num];
				a[num]=a[num+1];
				a[num+1]=temp;
				num++;
			}
		}
		else{
			for(int j=0;j<-q;j++){
				int temp=a[num];
				a[num]=a[num-1];
				a[num-1]=temp;
				num--;
			}
		}
		
	}
	for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	
	return 0;
}
