#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
//Ë«Ö¸Õë 
void print(ListNode *head){
	ListNode *p=head;
	while(p!=NULL){
		cout<<p->val<<"->";
		p=p->next;
	}
	cout<<endl;
}

bool hasCycle(ListNode *head){
	if(head==NULL){
		return false;
	}
	ListNode *fast=head,*slow=head;
	while(fast->next!=NULL&&fast!=NULL){
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			return true;
		} 
	}
	return false;
}

int main(){
	ListNode *head=NULL,*p=head;
	int i;
	for(int j=0;j<2;j++){
		for(i=1;i<=3;i++){
			p=new ListNode(i);
			p->next=head;
			head=p;
		}
	}
	cout<<hasCycle(head);
	
	return 0;
} 
