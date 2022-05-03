// 22_04_05_Ciclos.cpp 
//Fortino Ruben Arias Lordmendez


#include <iostream>
#include <string.h>

int main()
{
	/*
	//ciclo while
	while (uno == true)
	{
		std::cout << "uno es verdadero!!!! \n";
		std::cout << "desea salir?\n ingrese 1 para no salir";
		std::cout << "0 para si \n";
		std::cin >> uno;
	}
	*/
	/*
	bool uno = true;
	std::string correo = "ruben@gmail.com";
	std::string contra = "ell117";
	do
	{
		std::cout << "ingresa tu correo: \n";
		std::cin >> correo;
		if (correo == "ruben@gmail.com")
		{
			std::cout << "ingresa tu contraseña: \n";
			std::cin >> contra;
			if (contra == "ell117")
			{
				std::cout << "bienvenido al juego....\n" << correo << "\n";
			}
			else
			{
				std::cout << "contraseña incorrecta...\n";
			}
		}
		else
		{
			std::cout << "correo incorrecto...\n";
		}
	std::cout << "continue?\n ingrese 1 para salir";
	std::cout << "0 para si \n";
	std::cin >> uno;
	}
	while (uno == true);
	*/
	for (int aux = 0; aux <= 10; aux++)
	{
		std::cout << "el valor de tu aulixiar en este momento: " << aux << std::endl;

	}
}
