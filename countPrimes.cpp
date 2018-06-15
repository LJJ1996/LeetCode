#include<iostream>
#include<cstring>
#include<limits.h>
#include<vector>
using namespace std;

int isPrime[10000000];
int prime[1000000];

class Solution {
public:
    int countPrimes(int n) {
        int totlePrime = 0;
        memset(isPrime , 0 , sizeof(isPrime));
        for(int i = 2;i < n;i++){
            if(!isPrime[i]){
                prime[totlePrime++] = i;
            }
            for(int j = 0;j < totlePrime;j++){
                if(i * prime[j] >= n)
                    break;
                isPrime[i * prime[j]] = true;
                if(i % prime[j] == 0){
                    break;
                }
            }
        }
        return totlePrime;
    }
};

int main(){
    int n;
    Solution s;
    while(cin >> n){
        cout << s.countPrimes(n) << endl;
    }
    return 0;
}