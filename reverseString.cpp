#include<iostream>
using namespace std;

class Solution {
public:
    string reverseString(string s) {
       int len = s.length();
       string ans;
	   for(int i = 0;i < len / 2;i++){
   			swap(s[i],s[len - 1 - i]);	
		}
		return s; 
    }
};

int main(){
	string str;
	while(cin >> str){
		Solution s;
		string ans;
		ans = s.reverseString(str);
		cout << ans << endl;
	}

	return 0;
} 