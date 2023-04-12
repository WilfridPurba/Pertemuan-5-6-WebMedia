#include <iostream> 
using namespace std; 
int main() { 
	int n, sigma = 0;
	cout << "Masukkan bilangan integer positif : "; cin >> n; 
	for (int i = 1; i <= n; i++) { 
		sigma += i; 
        cout<<"Nilai i ="<< i << ", Sigma =" << sigma << endl;
	} 
	cout << "Jumlah dari "<< n <<" bil. pertama adalah : " << sigma <<endl;
	}