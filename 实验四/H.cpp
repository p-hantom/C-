#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	int i=s1.size()-1,j=s2.size()-1,cnt=0;
	while(i>=0,j>=0){
		if(s1[i]!=s2[j]){
			break;
		}
		i--;
		j--;
		cnt++;
	}
	if(cnt==0){
		cout<<"null"<<endl;
	}
	else{
		for(int k=s1.size()-cnt;k<s1.size();k++){
			cout<<s1[k];
		}
		cout<<endl;
	}
	
	return 0;
}
