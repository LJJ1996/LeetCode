#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.length();
        int len2 = needle.length();
        int i = 0, j = 0;
        if(len2 == 0){
        	return 0;
        }
        int start = i;
		while(start <= len1 - len2 && j < len2){
			i = start;
			while(i < len1 && j < len2 && haystack[i] == needle[j]){
				i++;
				j++;
			}
			if(start < len1 - len2 && j != len2){
				start++;
				j = 0;
			}else if(start <= len1 - len2 && j == len2){
				return i - len2;
			}else{
				return -1;
			}
		}
        if(j == len2){
        	return i - len2;
        }else{
        	return -1;
        }
    }
};

int main(){
	string str1 , str2;
	cin >> str1 >> str2;
	Solution s;
	int ans = s.strStr(str1 , str2);
	cout << ans << endl;
	return 0;
} 