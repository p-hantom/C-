#include <stdio.h> 
#include <string.h>

int main(){
	int m,n,i,n1;
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
		scanf("%d%d",&m,&n);
		int j=2;
		if(m<n){
			int temp=m;
			m=n;
			n=temp;
		}
		while(m%n!=0){
			m*=j;
			j++;
		}
		printf("%d\n",m);
	}
	
	return 0;
}
