#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0 || n == 2){
            return false;
        }else{
            while(!(n % 3)){
                n /= 3;
            }
            if(n == 1){
                return true;
            }
        }
        return false;
    }
};

int main(){
    int n;
    Solution s;
    while(cin >> n){
        cout << s.isPowerOfThree(n) << endl;
    }
    return 0;
}