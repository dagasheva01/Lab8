#include <iostream>
#include <cmath>
#include <algorithm>


using namespace std;

int main () {
	int n, m;
	cin >> n >> m;
	int A[n][m];
	

	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++i) {
		A[i][j]++;
		
		}

	
	}
	for(int i=0; i<n; ++i) {
		if(i%2==0) {
			for(int j=0; j<m; ++j) {
				cout << A[i][j] << " ";
			
			}
		}
		else {
		
			for(int j=m-1; j>=0; j--) {
				cout << A[i][j] << " ";
			
			}
		
		}
	
	}


return 0;
}