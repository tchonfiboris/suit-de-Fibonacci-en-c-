#include <iostream>

//cette fonction est une formule explicite de la suite de Fibonacci

int fibonacci(int n) {
	if (n <= 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}

	// initialisation des termes de la suites 
	unsigned int a = 0;
	unsigned int b = 1;
	unsigned int U = 0;

	// formule
	for (unsigned int i = 2; i <= n; i++) {
		U = a + b;
		a = b;
		b = U;
	}
	return U;
}

int main () {
	int n;
	
	// cette boucle renvoie les 15 premier termes de la suite de Fibonacci
	for (n = 0; n < 15; n++)

	std::cout << "F" << "(" << n << ")" << "=" << fibonacci(n) << std::endl;

	return 0;
}