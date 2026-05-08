#include <iostream>

using namespace std;
int main(){
	int i;
	float y, x, aux;
	i = 0;
	cout << "Qual o valor de y? ";
	cin >> y;
	if (y == 0){
		cout << "Raiz de y=0" << endl;
	} else {
		if (y < 0) {
			cout << "Nao e possivel fazer o calculo!" << endl;
		} else {
			x = y / 2;
			aux = 0;
			while (x != aux) {
				aux = x;
				x = x - (x * x - y) / (2 * x);
				i++;
			}
		cout << "Raiz de y=" << x << endl;
		cout << "Numero de repeticoes: " << i << endl;
		}
	}
}
