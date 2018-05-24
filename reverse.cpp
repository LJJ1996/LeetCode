#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
		long long  ans = 0;
		int flag = 1;
		if(x < 0){
			x = - x;
			flag = -1;
		}	 
		while(x != 0){
			ans = 10 * ans + x % 10;
			x /= 10;
		}
		ans = ans * flag;

		if(ans > 2147483647 || ans < -2147483647){
			ans = 0;
		} 
  
		return ans;
    }
};

int main(){
	int n;
	while(cin >> n){
		Solution s;
		long long ans = s.reverse(n);
		cout << ans << endl;
		
	//	cout << char('b' ^ 'b' ^ 'a') << endl;
	}	
	return 0;
}