//simon work with greek squARES and matrix traces

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int g[105][105];int n=1;
    for(int i = 0;i < n;i++) g[i][i]++;
}

int main() {
  int T;

  cin >> T;

  while (T--) {
    int N;
    cin >> N;
    int  matrix[N][N];
    
	
	bool rowHasDups = false;
	bool colHasDups = false;
	
	
	for (int x = 0; x < N; x++) {
	    for (int y = 0; y < N; y++) {
	        cin >> matrix[x][y];
	    }
	}
	
	int rowRepeatCount = 0, colRepeatCount = 0,
	diagonalSum = 0;
	
	for (int i = 0; i < N; i++) {
		rowHasDups = colHasDups = false;
		std::multiset<int>row;
	    std::multiset<int>col;
		
		for (int j = 0; j <  N; j++) {
		    
			if (i == j) {
				diagonalSum += matrix[i][j];
			}
			int rowc = matrix[i][j];
			int colc = matrix[j][i];
			
			
			if (row.count(rowc)) {
				rowHasDups = true;
			}
			
			if (col.count(colc)) {
				colHasDups = true;
			}
			
			row.insert(rowc);
			col.insert(colc);
		}
		
		if (rowHasDups) {
			rowRepeatCount++;
		}
		
		if (colHasDups) {
			colRepeatCount++;
		}
	}

    cout << diagonalSum << " " << rowRepeatCount << " " << colRepeatCount<<endl;
     }

  return 0;
}