#include <iostream> 
using namespace std; 
int main() { 
	int i=1; 
	while(i<=4) { 
		int j=1; 
		while (j<=5 ) { 
			cout << "(" << i<<","<< j << ")"; //tampilkan koordinat
			j++; 
		} 
		cout << endl;
		i++;
	}
}