#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
		int n = matrix.size();
        for(int i = 0;i < n - 1 - i;i++){
        	for(int j = i;j < n - 1 - i;j++){
        		int dx = i , dy = j;
        		int temp_2 = matrix[i][j];
	        	int temp = matrix[dy][n - 1 - dx];
	        	matrix[dy][n - 1 - dx] = temp_2;
				int temp_x = dx;
	        	dx = dy;
	        	dy = n - 1 - temp_x;
	        	temp_2 = matrix[dy][n - 1 - dx];
        		matrix[dy][n - 1 - dx] = temp;
	        	temp_x = dx;
				dx = dy;
	        	dy = n - 1 - temp_x;
	        	temp = matrix[dy][n - 1 - dx];
        		matrix[dy][n - 1 - dx] = temp_2;
	        	temp_x = dx;
				dx = dy;
	        	dy = n - 1 - temp_x;
	        	temp_2 = matrix[dy][n - 1 - dx];
        		matrix[dy][n - 1 - dx] = temp;
	        	temp_x = dx;
				dx = dy;
	        	dy = n - 1 - temp_x;

	        }
        } 
    }
};

int main(){
	vector<vector<int> > v;
	int n;
	int k;
	int temp;
	while(cin >> n){
		for(int i = 0;i < n;i++){
			vector<int> temp;
			for(int j = 0;j < n;j++){
				int t;
				cin >> t;
				temp.push_back(t);
			}
			v.push_back(temp);
		}
		Solution s;
		s.rotate(v);
		for(int i = 0;i < v.size();i++){
			for(int j = 0;j < v[i].size();j++){
				cout << v[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

/*
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16


*/