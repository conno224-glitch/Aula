#include <iostream>

int main() {
	int n;
	std::cout << "Digite um número inteiro: ";
	std::cin >> n;
	
	unsigned long long fatorial = 1;
	for (int i = 1; i <= n; ++i) {
		 fatorial *= i;
	}
	std::cout << "O fatorial de " << n << " é: " << fatorial << std::endl;
    
    return 0;
}
