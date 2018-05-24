#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* p1 = l1 ;
        ListNode* q1 = l2;
        ListNode* new_head = new ListNode(0);
        ListNode* new_head_flag = new_head;
        while(p1 != NULL && q1 != NULL){
        	if(p1->val <= q1->val){
        		new_head->next= p1;
        		new_head = new_head->next;
	        	p1 = p1->next;
	        }else{
        		new_head->next = q1;
        		new_head = new_head->next;
        		q1 = q1->next;
        	}

        }

        if(p1 != NULL){
        	new_head->next = p1;
        	new_head = new_head->next;
        	p1 = p1 -> next;
        }
        if(q1 != NULL){
        	new_head->next = q1;
       		new_head = new_head->next;
       		q1 = q1->next;
        }
        return new_head_flag->next;
    }
};

int main(){
	ListNode *head = new ListNode(1);
	ListNode *l1 = new ListNode(3);
	head->next = l1;
	ListNode *l2 = new ListNode(5);
	l1->next = l2;
	ListNode *l3 = new ListNode(7);
	l2->next = l3;
	ListNode *l4 = new ListNode(9);
	l3->next = l4;
	ListNode *l5 = new ListNode(11);
	l4->next = l5;
	ListNode *head2 = new ListNode(2);
	ListNode *l11 = new ListNode(4);
	head2->next = l11;
	ListNode *l22 = new ListNode(6);
	l11->next = l22;
	ListNode *l33 = new ListNode(8);
	l22->next = l33;
	ListNode *l44 = new ListNode(10);
	l33->next = l44;
	ListNode *l55 = new ListNode(12);
	l44->next = l55;
	Solution s;
	ListNode* new_head;
	new_head = s.mergeTwoLists(head , head2);
	while(new_head != NULL){
		cout << new_head->val << endl;
		new_head = new_head->next;
	}
	
	return 0;
} 