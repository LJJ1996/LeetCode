#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = INT_MAX;
        for(int i = 0;i < prices.size();i++){
            if(buy > prices[i]){
                buy = prices[i];
            }else if(profit < prices[i] - buy){
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};

int main(){
    vector<int> v;
    int n;
    while(cin >> n){
        int tmp;
        for(int i = 0;i < n;i++){
            cin >> tmp;
            v.push_back(tmp);
        }
        Solution s;
        cout << s.maxProfit(v) << endl;
    }
    return 0;
}