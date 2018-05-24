#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int ans = nums[0];
        for(int i = 0;i < nums.size() - 1;i++){
 			ans = (ans ^ nums[i + 1]);  
 		} 
 		return ans;
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

		bool flag = s.singleNumber(v);
		cout << flag << endl;
	}
}