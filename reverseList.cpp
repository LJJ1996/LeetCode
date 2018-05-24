#include<iostream>
using namespace std; 

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    	ListNode* new_head = head;
    	if(head == NULL){
	    	return NULL;
	    }
    	if(head->next == NULL){
	    	return head;
	    }
        while(new_head->next->next != NULL){
        	new_head = new_head -> next;
        }
        ListNode* tmp = new_head;
        new_head = new_head->next;
        new_head->next = tmp;
        tmp->next= NULL;
        reverseList(head);
        return new_head;
    }
};

int main(){
	ListNode *head = new ListNode(1);
	ListNode *l1 = new ListNode(2);
	head->next = l1;
	ListNode *l2 = new ListNode(3);
	l1->next = l2;
	ListNode *l3 = new ListNode(4);
	l2->next = l3;
	ListNode *l4 = new ListNode(5);
	l3->next = l4;
	ListNode *l5 = new ListNode(6);
	l4->next = l5;
	Solution s;
	ListNode* new_head;
	new_head = s.reverseList(head);
	while(new_head != NULL){
		cout << new_head->val << endl;
		new_head = new_head->next;
	}
	return 0;
}