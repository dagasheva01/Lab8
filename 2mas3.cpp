#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int n, m, sum=0, sum1= 0, ind;
	cin >> n >> m;
	int A[n][m];

	for(int i=0; i<n; ++i) {
		for(int j=0; j<m; ++j) {
			cin >> A[i][j];
		}
	
	}
	for(int i=0; i<n; ++i) {
		sum=0;

		for(int j=0; j<m; ++j) {
			sum = sum+A[i][j];
			}
			if(sum>sum1) {
			sum1=sum;
			ind=i;
			}
		
		}
	
	cout << sum1 << endl;
	cout << ind;

return 0;
}