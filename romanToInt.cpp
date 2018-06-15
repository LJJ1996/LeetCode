#include<iostream>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char , int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        int ans = 0;
        for(int i = 0;i < s.length();i++){
            if(m[s[i]] >= m[s[i + 1]]){
                ans += m[s[i]];
            }else{
                ans += m[s[i + 1]] - m[s[i]];
                i++;
            }
        }
        return ans;
    }
};

int main(){
    string s;
    Solution ss;
    while(cin >> s){
        cout << ss.romanToInt(s) << endl;
    }
    return 0;
}