#include <iostream>
#include <math.h>
using namespace std;

class Num{
	public:
		Num(int i):val(i){
			flag=0;
		}
		~Num(){
		}
		int isP();
		long long int reverse()const;
		int flag; 
		long long int val;	
		int rev;	
};

int Num::isP(){
	rev=reverse();
	if(rev==val){
		flag=1;
	}
	
	return flag;
}

long long int Num::reverse()const{
	long long int r=0,v=val;
	while(v!=0){
		r*=10;
		r+=v%10;
		v/=10;
	}
	return r;
}

int main(){
	Num n(0);
	cin>>n.val;
	long long int max=pow(2,31);
	while(n.val<max&&!n.isP()){
		n.val+=n.rev;
	}
	if(n.flag){
		cout<<n.val<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	
	return 0;
}
