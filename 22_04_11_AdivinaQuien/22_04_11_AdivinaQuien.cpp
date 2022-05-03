// Fortino Ruben Arias Lordmendez
// 22_04_11_AdivinaQuien.cpp

#include <iostream>

int main()
{
	int respuesta;
	std::cout << "Tratare de adivinar el deporte que estas pensando" << std::endl;
	std::cout << "responde 0 si es no, responde 1 si es si" << std::endl;
	std::cout << "es por tiempo?" << std::endl;
	std::cin >> respuesta;
	if (respuesta == 1)
	{

		std::cout << "es en equipo?" << std::endl;
		std::cin >> respuesta;
		if (respuesta == 1)
		{

			std::cout << "se usan las manos?" << std::endl;
			std::cin >> respuesta;
			if (respuesta == 1)
			{

				std::cout << "corres?" << std::endl;
				std::cin >> respuesta;
				if (respuesta == 1)
				{

					std::cout << "se usa pelota?" << std::endl;
					std::cin >> respuesta;
					if (respuesta == 1)
					{

						std::cout << "se usan herramientas?" << std::endl;
						std::cin >> respuesta;
						if (respuesta == 1)
						{

							std::cout << "hay contacto fisico?" << std::endl;
							std::cin >> respuesta;
							if (respuesta == 1)
							{

								std::cout << "LaCrosse" << std::endl;
							}
							else
							{
								std::cout << "Beisbol" << std::endl;
							}
						}
						else
						{
							std::cout << "Basketball" << std::endl;
						}
					}
					else
					{
						std::cout << "Atletismo" << std::endl;
					}
				}
				else
				{
					std::cout << "Boxeo" << std::endl;
				}
			}
			else
			{
				std::cout << "Ajedrez" << std::endl;
			}
		}
		else
		{
			std::cout << "Eres gamer de GTA" << std::endl;
		}
	}
}


