#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int flag1[30] , flag2[30];
        memset(flag1 , 0 , sizeof(flag1));
        memset(flag2 , 0 , sizeof(flag2));
		if(s.length() != t.length()){
			return false;
		}
		for(int i = 0;i < s.length();i++){
        	flag1[s[i] - 'a']++;
			flag2[t[i] - 'a']++;	
        }
        for(int i = 0;i < 26;i++){
        	if(flag1[i] != flag2[i]){
	        	return false;
	        }
        } 
        return true;
    }
};

int main(){
	string ss , tt;
	while(cin >> ss >> tt){
		Solution s;
		cout << s.isAnagram(ss , tt) << endl;
	}
	return 0;
} 