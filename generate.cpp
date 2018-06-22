#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > v;
        if(numRows == 1){
            v[0].push_back(1);
        }else if(numRows == 2){
            v[0].push_back(1);
            v[1].push_back(1);
            v[1].push_back(1);
        }else{
            v[0].push_back(1);
            v[1].push_back(1);
            v[1].push_back(1);
            for(int i = 2;i <= numRows - 1;i++){
                v[i].push_back(1);
                for(int j = 1;j <= v[i - 1].size();j++){
                    v[i].push_back(v[i - 1][j - 1] + v[i - 1][j]);
                }
                v[i].push_back(1);
            }
        }
        cout << v.size() << endl;
        for(int i = 0;i < v.size();i++){
            for(int j = 0;j < v[i].size();j++){
                cout << v[i][j] << " ";
            }   
            cout << endl;
        }
        return v;
    }
};

int main(){
    vector<vector<int> > v;
    Solution s;
    int n;
    while(cin >> n){
    //    v = s.generate(n);
            v[0].push_back(1);

        
        // cout << v[0][0] << endl;
    }
        
    return 0;
}