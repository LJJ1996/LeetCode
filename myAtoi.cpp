#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        long long ans = 0;
        int flag = 1;
        int start = 0;
		int len = str.length();
		while(str[start] == ' '){
			start++;
		}
		if(start < len && str[start] == '-'){
			flag = -1;
			start++;
		}else if(start < len && str[start] == '+'){
			flag = 1;
			start++;
		}else if(start >= len || !isdigit(str[start])){
			return 0;
		}

		if(start < len && isdigit(str[start])){
			while(start < len && isdigit(str[start])){
				ans = ans * 10 + (str[start] - '0');
				start++;
				if(flag == -1 && ans > pow(2.0 , 31)){
					return INT_MIN;
				}if(flag == 1 && ans > (pow(2.0 ,31) - 1)){
					return INT_MAX;
				}
			}
		}
		ans = ans * flag;
		return ans;
    }
};

int main(){
	string s;
	while(getline(cin , s)){
		int ans;
		Solution ss;
		ans = ss.myAtoi(s); 
		cout << ans << endl; 
	}	
	return 0;
} 