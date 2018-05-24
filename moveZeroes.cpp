#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	vector<int>::iterator it = nums.begin();
        for(int j = 0 , i = 0;j < nums.size();j++){
        	if(!nums[i]){
	        	nums.erase(it+i);
	        	nums.push_back(0);
	        }else{
        		i++;
        	}
        }
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

		s.moveZeroes(v);
		for(int i = 0;i < v.size();i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}