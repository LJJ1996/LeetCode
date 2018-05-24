#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        if(len == 0){
        	return "";
        }
        if(len == 1){
        	return strs[0];
        }
        int min_len = INT_MAX;
        for(int i = 0;i < len;i++){
        	int tmp = strs[i].length();
        	min_len = min_len > tmp ? tmp : min_len;
        }
		string com_str = "";
		bool flag = false;
		int i , j;
		for(i = 0;i < min_len;i++){
			char fir_flag = strs[0][i];
			for(j = 1;j < len;j++){
				if(strs[j][i] != fir_flag){
					flag = true;
					break;
				}
			}
			if(flag){
				break;
			}
			if(j == len){
				com_str += fir_flag;
			}
		}
		return com_str;
    }
};

int main(){
	vector<string> strs;
	int n;
	cin >> n;
	string tmp; 
	for(int i = 0;i < n;i++){
		cin >> tmp;
		strs.push_back(tmp);
	}	
	Solution s;
	cout << s.longestCommonPrefix(strs) << endl; 
	return 0;
}