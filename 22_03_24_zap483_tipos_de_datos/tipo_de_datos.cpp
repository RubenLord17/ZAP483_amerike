//24-03-22 Fortino Ruben Arias Lordmendez

#include <iostream>



int main()
{
	int numeros = 0;
	float decimal = 0;
	char caracteres = 0;
	double karl = 0;
	std::string fral;

	std::cout << "ingresa un numero" << std::endl;
	std::cin >> numeros;
	std::cout << "su numero ingresado es:" << numeros << std::endl;

	std::cout << "ingresa un numero decimal" << std::endl;
	std::cin >> decimal;
	std::cout << "su decimal es: " << decimal << std::endl;

	std::cout << "ingresa un caracter" << std::endl;
	std::cin >> caracteres;
	std::cout << "su caracter es:" << caracteres << std::endl;

	std::cout << "ingresa un numero mas grande: " << std::endl;
	std::cin >> karl;
	std::cout << "su numero superior es:" << karl << std::endl;

	std::cout << "ingresa una palabra aleatoria: " << std::endl;
	std::cin >> fral;
	std::cout << "su palabra aleatoria es: " << fral << std::endl;
}