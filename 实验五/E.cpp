#include <iostream>
using namespace std;

class List{
	public:
		List(){			
		}
		void makeList(const int n){
			
		}
		void getInstruct(){
		}
		void move(){
		}
		void show()const{
		}
	private:
		int n,p,q;
		List *phead,*pnext,*ppre;
		int number;
};

int main(){
	int n,m,p,q;//n¸öÑ§Éú 
	cin>>n>>m;
	List l;
	l.makeList(n);
	for(int i=0;i<m;i++){
		l.getInstruct();
		l.move(); 
	}
	l.show();
	
	return 0;
}
