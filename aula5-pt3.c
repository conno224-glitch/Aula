#include <iostream>

int main(){
	int cont, num;
	std::cout << "Digite um numero para tabuada: ";
	std::cin >> num;
	cont = 1;
	
	while (cont < 11){
		std::cout << num << " X " << cont << " = " << num * cont <<
		std::endl;
    cont++;
	}
}
