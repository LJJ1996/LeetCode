#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        vector<int> v;
        vector<int>::iterator it = v.begin();
        bool flag = false;
        for(int i = len - 1;i >= 0;i--){
        	it = v.begin();
        	if(!flag){
	        	if(digits[i] < 9){
		        	v.insert(it , digits[i] + 1);
		        	flag = true;
		        }else if(i == 0){
        			v.insert(it , 0);
        			it = v.begin();
        			v.insert(it , 1);
        			break;
        		}else{
	        		v.insert(it , 0);
	        	}
	        }else{
        		v.insert(it , digits[i]);
        	}
        }
        return v;
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
		vector<int> ans;
		ans = s.plusOne(v);
		for(int i = 0;i < ans.size();i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}