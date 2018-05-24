#include<iostream>
#include<vector>
using namespace std; 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator it;
        int num = 0;
        for(int i = 0;i < nums.size();i++){
            int temp = nums[i];
            num++;
            for(int j = i + 1;j < nums.size();){
                if(nums[j] == temp){
                	it = nums.begin();
                    nums.erase(it + j);
                }else{
                	j++;
                }
            }
        }
        return num;
    }
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int flag = false;
        int i , j;
        for(i = 0;i < prices.size();){
        	int temp1 = prices[i];
        	int temp2 = temp1;
        	for(j = i + 1;j < prices.size();j++){
	        	if(temp2 <= prices[j]){
	      			if(j == prices.size() - 1){
				      	profit += prices[j] - temp1;
				      	flag = true;
				      	break;
			      	}
			      	temp2 = prices[j];
	    		}else{
			    	profit += temp2 - temp1;
			    	i = j;
			    	break;
			    }
	        }
	      	if(flag || j >= prices.size()){
	      		break;
	      	}	
        }
        return profit;
    }
};

int main(){
	vector<int> v;
	int n;
	int temp;
	while(cin >> n){
		for(int i = 0;i < n;i++){
			cin >> temp;
			v.push_back(temp);
		}
		Solution s;
/*
		int ans = s.removeDuplicates(v);
		cout << ans << endl;
		for(int i = 0;i < v.size();i++){
			cout << v[i] << " ";
		}
		cout << endl;
*/
		int ans = s.maxProfit(v);
		cout << ans << endl;
	}
}