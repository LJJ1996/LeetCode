#include<iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return 2;
        }
        int a = 2 , b = 1 , tmp;
        for(int i = 3;i <= n;i++){
            tmp = b;
            b = a;
            a += tmp;
        }
        return a;
    }
};

int main(){

    int n;
    Solution s;
    while(cin >> n){
        cout << s.climbStairs(n) << endl;
    }
    return 0;
}