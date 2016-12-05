#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int n, m;
	cin >> n >> m;
	int A[n][m];

	for(int i=0; i<n; ++i) {
		for(int j=0; j<m; ++j) {
			A[i][j]= i*j;
			cout << A[i][j] << " " ;
		    
		}
		cout << endl;
	
	}

return 0;

}