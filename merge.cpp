#include<iostream>
#include<vector>
using namespace std;

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector<int>::iterator it1 = nums1.begin() , it2 = nums2.begin();
//         int i = 0 , j = 0;
//         while(i <= (m + j) && j < n){
//             if(nums1[i] == 6){
//                 cout << nums1[i] << " " << nums2[i] << endl;
//             }
//             if(nums2[j] <= nums1[i]){
//                 nums1.insert(it1 + i, nums2[j]);
//                 j++;
//                 i++;
//             }else if(nums2[j] > nums1[i]){
//                 i++;
//             }
//         }
//         if(i > (m + j)){
//             while(j < n){
//                 nums1.push_back(nums2[j]);
//                 j++;
//             }
//         }

//     }  
// };

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>::iterator it1 = nums1.begin() , it2 = nums2.begin();
        while(n--){
            nums1.erase(nums1.end() - 1);
        }
        while(it1 < nums1.end() && it2 < nums2.end()){
            if(*it2 <= *it1){
                it1 = nums1.insert(it1, *it2);
                it2++;
            }else if(*it2 > *it1){
                it1++;
            }
        }
        if(it1 == nums1.end()){
            while(it2 != nums2.end()){
                nums1.push_back(*it2);
                it2++;
            }
        }

    }  
};

int main(){
    int n , m ;
    vector<int> v1 , v2;
    while(cin >> m >> n){
        int tmp;
        v1.clear();
        v2.clear();
        for(int i = 0 ;i < m + n;i++){
            cin >> tmp ;
            v1.push_back(tmp);
        }
        for(int i = 0;i < n;i++){
            cin >> tmp;
            v2.push_back(tmp);
        }
        Solution s;
        s.merge(v1 , m , v2 , n);
        for(int i = 0;i < v1.size();i++){
            cout << v1[i] << " ";
        }
        cout << endl;
    }

    return 0;
}