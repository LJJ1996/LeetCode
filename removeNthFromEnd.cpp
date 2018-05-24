#include<iostream>
using namespace std; 

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* tmp1 = head;
        ListNode* tmp2 = head;
        while(tmp1 != NULL){
        	tmp1 = tmp1->next;
			cnt++; 
        }
        cout << cnt << endl;
        if(n == cnt){
        	head = head->next;
        }else{
        	for(int i = 0;i < (cnt - n - 1);i++){
	        	tmp2 = tmp2->next;
	        }
	        ListNode* tmp = tmp2->next;
	        tmp2->next = tmp2->next->next;
	        tmp = NULL;
        }
        return head;
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
	new_head = s.removeNthFromEnd(head , 5);
	while(new_head != NULL){
		cout << new_head->val << endl;
		new_head = new_head->next;
	}
	return 0;
}