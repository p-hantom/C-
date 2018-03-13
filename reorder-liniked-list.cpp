#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

void print(ListNode *head){
	ListNode *p=head;
	while(p!=NULL){
		cout<<p->val<<"->";
		p=p->next;
	}
	cout<<endl;
}

ListNode* reverse1(ListNode *head){
  ListNode *p,*q,*pr;
  p = head->next;
  q = NULL;
  head->next = NULL;
  while(p){
    pr = p->next;
    p->next = q;
    q = p;
    p = pr;
    print(head);
  }
  head->next = q;
  return head;
}

void reorderList(ListNode *head){
	ListNode *fast=head,*slow=head;
	while(fast!=NULL&&fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	
}

int main(){
	ListNode *head=NULL,*p=head;
	int i;
	//for(int j=0;j<2;j++){
	for(i=0;i<=4;i++){
		p=new ListNode(i);
		p->next=head;
		head=p;
	}
	//}
	//reorderList(head);
	reverse1(head);
	
	return 0;
} 
