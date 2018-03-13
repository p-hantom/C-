#include <iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode * next;
	ListNode(int x):val(x),next(NULL){} 
};

void print(ListNode *head){
	ListNode *p=head;
	while(p!=NULL){
		cout<<p->val<<"->";
		p=p->next;
	}
	cout<<endl;
}

ListNode *rotateRight(ListNode *head, int k){
	int cnt=0,i;
	ListNode *p=head,*q,*l;
	if(head==NULL){
		return head;
	}
	while(p!=NULL){
		cnt++;
		q=p;
		p=p->next;
	}
	q->next=head;
	for(i=0;i<cnt-k%cnt;i++){
		q=q->next;
	}
	head=q->next;
	q->next=NULL;

	//print(head);
	return head;
}

int main(){
	int k=0;
	int n=5,i;
	ListNode *head=new ListNode(0),*p=head;
	for(i=1;i<=n;i++){
		p->next=new ListNode(i);
		p=p->next;
	}
	p->next=NULL;
	rotateRight(head->next,k);
	//print(rotateRight(head->next,k));
	
	return 0;
}
