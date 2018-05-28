#include<iostream>
using namespace std;


bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1 , end = n , res = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(isBadVersion(mid)){
                res = mid;
                end = mid - 1;
            }else{
                start = mid  + 1;
            }
        }      
        return res;
    }
};

int main(){
    int n;
    Solution s;
    while(cin >> n){
        cout << s.firstBadVersion(n) << endl;
    }
    return 0;
}