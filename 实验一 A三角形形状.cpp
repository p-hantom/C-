#include <stdio.h> 
#include <string.h>

void f(){	
	int a[3];
	scanf("%d,%d,%d",&a[0],&a[1],&a[2]);
	if(a[0]+a[1]<=a[2]||a[0]+a[2]<=a[1]||a[1]+a[2]<=a[0]){
		printf("illegal\n");
		return;
	}
	int i,j,max=0;
	for(i=1;i<3;i++){
		if(a[i]<a[i-1]){
			int temp=a[i-1];
			a[i-1]=a[i];
			a[i]=temp;
		}
	}
	//printf("%d %d %d\n",a[0],a[1],a[2]);
	int sum=a[0]*a[0]+a[1]*a[1];
	if(sum==a[2]*a[2]){
		printf("right\n");
	}
	else if(sum<a[2]*a[2]){
		printf("obtuse\n");
	}
	else{
		printf("acute\n");
	}
//	if(a>b){
//		if(a>c){
//			max=a;
//			if(b>c){
//				mid=b;
//				min=c;
//			}
//			else{
//				mid=
//			}
//		}
//		else if(c>a){
//			max=c;
//			mid=a;
//			min=b;
//		}
//	}
	
}

int main(){
	int i;
	f();
	
	return 0;
}
