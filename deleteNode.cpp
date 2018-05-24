#include<iostream>
using namespace std;
 
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
    	while(node->next->next!= NULL){
	    	node->val= node->next->val;
	    	node = node->next;
	    }
	    node->val= node->next->val;
		node->next = NULL; 
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
	s.deleteNode(head);
	while(head != NULL){
		cout << head->val << endl;
		head = head->next;
	}
	return 0;
}