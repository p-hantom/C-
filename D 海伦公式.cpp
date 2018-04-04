#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class R{
	public:
		R(){
			cin>>a>>b>>c;
			p=(a+b+c)/2.0;
		}
		bool isR(){
			if(a+b<=c||a+c<=b||b+c<=a){
				return false;
			}
			return true;
		}
		void s(){
			double ss=0;
			ss=p*(p-a)*(p-b)*(p-c);
			//cout<<ss<<endl;
			ss=sqrt(ss);
			//cout<<ss<<endl;
			cout<<setiosflags(ios::fixed)<<setprecision(2)<<ss<<endl;
		}
	private:
		int a,b,c;
		double p;
};

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		R r;
		if(!r.isR()){
			cout<<"Failed"<<endl;
		}
		else{
			r.s();
		}
	}
	
	return 0;
}
