#include <iostream> 
using namespace std; 
int main() { 
	int i=1, n, sigma = 0; 
	cout << "Masukkan bilangan integer positif"; cin >> n; 
	while (1) {
		 if (i > n) break; // loop berhenti disini ketika i>n 
		sigma +=i; 
		i++; 
	} 
	cout << "Jumlahnya dari "<< n <<" bil. pertama adalah: " << sigma << endl; 
}