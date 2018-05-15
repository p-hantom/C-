#include <iostream>
#include <vector>
using namespace std;
//时长有问题！TE 
int f[1000000];

void init(int n){
	for(int i=1;i<=n;i++){
		f[i]=i;
	}
}

int getf(int x){
	if(f[x]==x){
		return x;
	}
	else{
		f[x]=getf(f[x]);
		return f[x];
	}
}

void q(int x,int y){
	if(getf(x)==getf(y)){
		cout<<"Y"<<endl;
	}
	else{
		cout<<"N"<<endl;
	}
}

void merge(int x,int y){
	int t1,t2;
	t1=getf(x);t2=getf(y);
	if(t1!=t2){
		f[t2]=t1;
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	init(n);
	for(int i=0;i<m;i++){
		char a;
		cin>>a;
		int x,y;
		cin>>x>>y;
		switch(a){
			case 'Q': q(x,y);break;
			case 'U': merge(x,y);break;
		}
	}
	
	return 0;
}
