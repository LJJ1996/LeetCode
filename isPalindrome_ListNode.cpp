#include<iostream>
#include<queue>
#include<stack>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        queue<int> q;
        while(head != NULL){
			s.push(head->val);
			q.push(head->val);
			head = head->next;
        }
        while(!s.empty() && !q.empty()){
			if(s.top() != q.front()){
				return false;
			}
			s.pop();
			q.pop();
        }
        return true;
    }
};

int main(){
	ListNode *head = new ListNode(1);
	ListNode *l1 = new ListNode(2);
	head->next = l1;
	ListNode *l2 = new ListNode(1);
	l1->next = l2;

	Solution s;
	cout << s.isPalindrome(head) << endl;
	return 0;
}

