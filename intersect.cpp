#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std; 

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i , j , last = 0;
        sort(nums1.begin(),nums1.end());
		sort(nums2.begin(),nums2.end()); 
        for(i = 0;i < nums1.size();i++){
        	for(j = last;j < nums2.size();j++){
	        	if(nums1[i] == nums2[j]){
	        		ans.push_back(nums1[i]);
	        		last = j + 1;
	        		break;
	        	}
	        }
        }
        return ans;
    }
};

int main(){
	vector<int> v1 ,v2 , v3;
	int n , m;
	int k;
	int temp;
	while(cin >> n >> m){
		for(int i = 0;i < n;i++){
			cin >> temp;
			v1.push_back(temp);
		}
		for(int i = 0;i < m;i++){
			cin >> temp;
			v2.push_back(temp);
		}
		Solution s;
		
		v3 = s.intersect(v1 , v2);
		for(int i = 0;i < v3.size();i++){
			cout << v3[i] << " ";
		}
		cout << endl;
	}
}