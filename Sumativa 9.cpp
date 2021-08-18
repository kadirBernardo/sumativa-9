/*Calcular y presentar cuantas cifras tiene un determinado valor numerico introducido por teclado*/
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main() {
		int numero = 2;
		int cifras = 1;
		
		while (numero >= 10) {
			  numero /= 10;
			  cifras++;
		}
		printf("tiene &d cifras", cifras);
		
		
		printf ("\n\n\n"); system("PAUSE");
		return 0;
}
