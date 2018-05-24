#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int matrix[30];
		int len = s.length();
		memset(matrix , 0 , sizeof(matrix));
        for(int i = 0;i < len;i++){
        	matrix[s[i] - 'a']++;
        }
        for(int i = 0;i < len;i++){
        	if(matrix[s[i] - 'a']== 1){
	        	return i;
	        }
        }
        return -1;
    }
};

int main(){
	string s;
	while(cin >> s){
		Solution st;
		int ans = st.firstUniqChar(s);
		cout << ans << endl;
	}
	return 0;
} 