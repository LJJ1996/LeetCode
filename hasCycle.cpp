#include<iostream>
using namespace std; 

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
    	if(head == NULL){
	    	return false;
	    }
        ListNode* tmp1 = head;
        ListNode* tmp2 = head;
        while(tmp1 != NULL && tmp2 != NULL && tmp1->next != NULL && tmp2->next->next != NULL){
        	tmp1 = tmp1 -> next ;
        	tmp2 = tmp2 -> next -> next;
        	if(tmp1->val == tmp2 -> val){
	        	return true;
	        }
        }
        return false;
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
	ListNode *l6 = new ListNode(7);
	l5->next = l6;	
	ListNode *l7 = new ListNode(8);
	l6->next = l7;	
//	l7->next = l3;
	Solution s;
	cout << s.hasCycle(head) << endl;
	return 0;
}