#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i < len - 1;i++){
        	if((nums[i] ^ nums[i + 1]) == 0){
	        	return true;
	        }
        }
    	return false;
	}
};

int main(){
	vector<int> v;
	int n;
	int k;
	int temp;
	while(cin >> n){
		for(int i = 0;i < n;i++){
			cin >> temp;
			v.push_back(temp);
		}
		Solution s;

		bool flag = s.containsDuplicate(v);
		
		for(int i = 0;i < v.size();i++){
			cout << v[i] << " ";
		}
		cout << endl;
		
		if(flag){
			cout << "True" << endl;
		}else{
			cout << "False" << endl;
		}
	}
}