#include <iostream>
#include <vector>
using namespace std;

class Decimal{
	public:
		Decimal(int ii):d(ii){
		}
		void convertToB(){
			int temp=d,i=0;
			while(temp!=0){
				b.push_back(temp%2);
				//cout<<b[i]<<endl;
				//i++;
				temp/=2;
			}
		}
		int cntZero(){
			int cnt=0;
			//cout<<b.size();
			for(int i=0;i<b.size();i++){
				
				if(b[i]==0){
					cnt++;
					//cout<<cnt<<endl;
				}
			}
			
			return cnt;
		}
	private:
		int d;
		vector<int> b;
}; 

int main(){
	int d;
	cin>>d;
	Decimal dd(d);
	dd.convertToB();
	cout<<dd.cntZero()<<endl;
	
	return 0;
}
