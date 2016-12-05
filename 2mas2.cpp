#include <iostream>

using namespace std;

int main(){ 
	int i,j,n; 
 
	cin >> n; 
	int a[100][100];
	
	for (i=0; i<n; ++i){ 
		for (j=0; j<n; ++j){ 
			cin >> a[i][j]; 
	} 
			} 

	for(i=0; i<n; ++i){ 
		for (j=0; j<n; ++j){ 
			if (a[i][j]!=a[j][i]){ 
				cout << "no";
					return 0;
					}
					}}
				cout << "yes";
	return 0;
}
		
		


	
	


  
