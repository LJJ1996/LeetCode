#include<iostream>
using namespace std;

class Solution{
public:
	string countAndSay(int n){
		string str_new = "";
		string str = "1";
		if(n == 1){
			return str;
		}
		for(int i = 2;i <= n;i++){
			str_new = "";
			int cnt = 1;
			for(int j = 0;j <= str.length() - 1;j++){
				if(str[j + 1] != str[j]){
					str_new += (cnt + '0');
				//	cout << str[j] << endl;
					str_new += str[j];
					cnt = 1;
				}else{
					cnt++;
				}
			}
			str = str_new;
		}
		return str_new;
	}
};

int main(){
	Solution s;
	int n;
	while(cin >> n){
		cout << s.countAndSay(n) << endl;
	}
	return 0;
}