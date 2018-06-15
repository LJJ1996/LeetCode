#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> sum;
        int ans = INT_MIN;
        int len = nums.size();
        if(len == 0){
            return 0;
        }
        if(len == 1){
            return nums[0];
        }
        if(len == 2){
            return max(nums[0] , nums[1]);
        }
        sum.push_back(nums[0]);
        sum.push_back(max(nums[0] , nums[1]));
        for(int i = 2;i < nums.size();i++){
            sum.push_back(nums[i]);
            sum[i] = max(sum[i - 1] , sum[i - 2] + nums[i]);
        }
        return sum[len - 1];
    }
};

int main(){
    vector<int> v;
    int n;
    cin >> n;
    int tmp;
    for(int i = 0;i < n;i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    Solution s;
    cout << s.rob(v) << endl;

    return 0;
}