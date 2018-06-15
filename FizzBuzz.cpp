#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
  		vector<string> v;
		for(int i = 1;i <= n;i++){
			if(!(i % 15)){
				v.push_back("FizzBuzz");
			}else if(!(i % 5)){
				v.push_back("Buzz");
			}else if(!(i % 3)){
                v.push_back("Fizz");
            }else{
				v.push_back(to_string(i)); 
			}
		}
		return v;      
    }
};


int main(){
	int n ;
	cin >> n;
	vector<string> s;
	Solution ss;
	s = ss.fizzBuzz(n);
	for(int i = 0;i < s.size();i++){
		cout << s[i] << endl;
	}
	return 0;
}

