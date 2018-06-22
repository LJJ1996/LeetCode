#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i = 0;
        for(i = 0;i < nums.size();i++){
            if(i != nums[i]){
                return i;
            }
        }
        return i;
    }
};

int main(){
    int n;
    vector<int> v;
    cin >> n;
    for(int i = 0;i < n;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    Solution s;
    cout << s.missingNumber(v) << endl;
    return 0;
}