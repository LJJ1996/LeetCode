#include<iostream>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt = 0;
        while(x != 0 || y != 0){
            cnt += ((x & 1) ^ (y & 1));
            x >>= 1;
            y >>= 1;
        }
        while(x != 0){
            cnt += (x & 1);
            x >>= 1;
        }
        while(y != 0){
            cnt += (y & 1);
            y >>= 1;
        }
        return cnt;
    }
};

int main(){
    int m , n;
    Solution s;
    while(cin >> m >> n){
        cout << s.hammingDistance(m , n) << endl;
    }
    return 0;
}