// 22_03_22_BatallaPkeman.cpp 
// Fortino Ruben Arias Lordmendez 
//

#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{
    int bulbasar = 50, squirtle = 1, charmander = 40, pikachu = 2;
    int bulbasarvida = 500, squirtlevida = 400, charmandervida = 600, pikachuvida = 600;
    int opc1, opc2;
    bool continuar = true;
    do
    {
        Sleep(1000);
        std::cout << "elige a tu mascota\n";
        Sleep(500);
        std::cout << "\n1 Bulbasar\nVida: 500\nAtaque:40\n" << "\n2 Squirtle\nVida: 400\nAtaque:40\n";
        std::cin >> opc1;
        switch (opc1)
        {
        case 1:
            std::cout << "Escogiste Bulbasar!\n";
            std::cout << "Rival Charmander!\n";

            while (bulbasarvida >= 0 && charmandervida >= 0)
            {
                std::cout << "1. Ataque\n2. Defensa\n";
                std::cin >> opc1;
                switch (opc1)
                {
                case 1: charmandervida = charmandervida - 50;
                    charmandervida = bulbasarvida - 40;
                    break;
                case 2: bulbasarvida = bulbasarvida + 30;
                    charmandervida = charmandervida + 35;
                    break;
                default:
                    std::cout << "Escoge una opcion.\n";
                }
                std::cout << "Vida de Bulbasar: " << bulbasarvida << "\n";
                std::cout << "Vida de Charmander: " << charmandervida << "\n";
                if (bulbasarvida == 0)
                {
                    std::cout << "Ntp intentalo de nuevo" << std::endl;
                    break;
                }
                if (charmandervida == 0)
                {
                    std::cout << "Que bueno eres" << std::endl;
                    break;
                }
            }
            break;

        case 2:
            std::cout << "Escogiste Squirtle\n";
            std::cout << "Rival Pikachu\n";

            while (squirtlevida >= 0 && pikachuvida >= 0)
            {
                std::cout << "1. Ataque\n2. Defensa\n";
                std::cin >> opc2;
                switch (opc2)
                {
                case 1: pikachuvida = pikachuvida - 50;
                    pikachuvida = squirtlevida - 40;
                    break;
                case 2: squirtlevida = squirtlevida + 30;
                    pikachuvida = pikachuvida + 35;
                    break;
                default:
                    std::cout << "Escoge opcion.\n";
                }
                std::cout << "Vida de Bulbasar: " << squirtlevida << "\n";
                std::cout << "Vida de Charmander: " << pikachuvida << "\n";
                if (squirtlevida == 0)
                {
                    std::cout << "Ntp intentalo de nuevo" << std::endl;
                    break;
                }
                if (pikachuvida == 0)
                {
                    std::cout << "Que bueno eres" << std::endl;
                    break;
                }
            }
            break;
        default:
            std::cout << "Elige a tu pokemon.\n";
        }
        std::cout << "Quieres jugar de nuevo presiona 1\n";
        std::cin >> continuar;
    } while (continuar);
    
}


