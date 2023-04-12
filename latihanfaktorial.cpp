#include <iostream> 
using namespace std; 
int main() { 
	int n, fak = 1;
	cout << "Masukkan bilangan integer positif"; cin >> n; 
	for (int i = n; i >= 1; i--) { 
		fak = fak * i; 
	} 
	cout << "Jumlah dari "<< n <<" Faktorial adalah : " << fak << endl;
	}