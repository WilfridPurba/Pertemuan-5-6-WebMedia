#include <iostream> 
using namespace std; 
int main() { 
	int n, f = 1; 
	cout << "Masukkan bil integer positif : "; cin >> n; 
	do { 
		f *= n; 
		n--; 
	} while (n >= 1); 
	cout << n << " faktorial adalah : " << f << endl;
}