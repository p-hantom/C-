#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int m50=n/50,m30=n%50/30,m10=n%50%30/10;
	int total=7*m50+4*m30+m10;
	cout<<total<<endl;
	
	return 0;
}
