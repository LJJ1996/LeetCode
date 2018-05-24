#include<iostream>
#include<vector>
using namespace std; 

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
		int n = nums.size(); 
        int new_k = k % n;
        vector<int>::iterator it;
        it = nums.begin();
        for(int i = 0;i < new_k;i++){
        	int temp = nums[n - 1];
        	nums.pop_back();
        	nums.insert(it , temp);
        }
    }
};

int main(){
	vector<int> v;
	int n;
	int k;
	int temp;
	while(cin >> n >> k){
		for(int i = 0;i < n;i++){
			cin >> temp;
			v.push_back(temp);
		}
		Solution s;

		s.rotate(v , k);
		
		for(int i = 0;i < v.size();i++){
			cout << v[i] << " ";
		}
		cout << endl;

	}
}