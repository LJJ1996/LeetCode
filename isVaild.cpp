#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i = 0;
        for(i = 0;i < s.length();i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }else{
                if(st.size() && ((st.top() == '(' && s[i] == ')') || (st.top() == '[' && s[i] == ']') || (st.top() == '{' && s[i] == '}'))){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        if(st.size() == 0 && i == s.length()){
            return true;
        }      
        return false;
    }
};

int main(){
    string s;
    cin >> s;
    Solution ss;
    cout << ss.isValid(s) << endl;

    return 0;
}