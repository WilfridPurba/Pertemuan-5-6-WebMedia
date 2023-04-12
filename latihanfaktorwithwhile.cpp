#include <iostream> 
#include <iostream> 
using namespace std; 
int main() { 
	int i=1, n, fak = 1; 
	cout << "Masukkan bilangan integer positif : "; cin >> n; 
	while (i<=n) { 
		fak *= i; 
      cout << "i = " << i << ", Faktorial = " << fak << endl;
		i++; 
	} 
	cout << "Jumlahnya dari "<< n <<" bil. pertama adalah : " << fak << endl; 
	}