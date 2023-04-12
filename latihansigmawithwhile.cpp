#include <iostream> 
using namespace std; 
int main() { 
	int i=1, n, sigma = 0; 
	cout << "Masukkan bilangan integer positif"; cin >> n; 
	while (i<=n) { 
		sigma += i; 
        cout <<"i = "<< i <<", Sigma = " << sigma << endl;   
		i++;
        
	} 
	cout << "Jumlahnya dari "<< n <<" bil. pertama adalah : " << sigma << endl;
	}