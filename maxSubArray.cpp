#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class Solution{
public:
    int maxSubArray(vector<int>& nums){
        vector<int> sum;
        int ans = INT_MIN;
        for(int i = 0;i < nums.size();i++){
            sum.push_back(nums[i]);
            sum[i] = max(sum[i] , sum[i - 1] + nums[i]);
            ans = max(sum[i] , ans);
        }
        return ans;
    }
};

int main(){

    int n;
    vector<int> v;
    cin >> n ;
    int temp;
    for(int i = 0;i < n;i++){
        cin >> temp;
        v.push_back(temp);
    }
    Solution s;
    cout << s.maxSubArray(v) << endl;

    return 0;
}