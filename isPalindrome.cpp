#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    bool isVaild(char ch){
    	if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')||(ch >= '0' && ch<='9')){
	    	return true;
	    }
	    return false;
    }
    bool ischar(char ch){
    	if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')){
	    	return true;
	    }
	    return false;
    }
	bool isPalindrome(string s) {
		int start = 0 , end = s.length() - 1;
//		cout << char('a' - 32) << endl;
//		cout << isVaild(s[6]) << endl;
		while(start < end){
			while(!isVaild(s[start]))
				start++;
			while(!isVaild(s[end]))
				end--;
			if(start > end){
				return true;
			}
			if(s[start] == s[end] || (ischar(s[start]) && ischar(s[end]) && abs(s[start]-s[end]) == 32)){
		//		cout << s[start] << " " << s[end] << endl;
				start++;
				end--;
			}else{
				return false; 
			}
		}
		return true;
    }
};

int main(){
	string s;
	getline(cin , s);
	Solution ss;
	cout << ss.isPalindrome(s) << endl;
	return 0;
}

