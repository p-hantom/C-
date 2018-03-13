#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int visit[100]={0};
int a[100]={0};
int cnt=0;
void dfs(int index,int n){//index:第几个位置 
	if(index==n+1){//note:此处为n+1  边界条件！！ 
		cnt++;
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(visit[i]==0){//i：数值为i的数字 
			a[index]=i;
			visit[i]=1;
			dfs(index+1,n);
			visit[i]=0;
			//a[index]=0;   //不需要这句 
		}
	}
	//cout<<cnt<<endl;
}

int main(){
	int n=5;
	dfs(1,n);
	
	return 0;
}
