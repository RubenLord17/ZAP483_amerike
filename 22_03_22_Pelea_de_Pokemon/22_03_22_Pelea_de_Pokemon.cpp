// 22_03_22_Pelea_de_Pokemon.cpp 
// Fortino Ruben Arias Lordmendez

#include <iostream>
using namespace std; 

int main()
{
    int Bulbasar = 1, Charmander = 2, Squirtle = 1;
    int vidaBulbasar = 14, vidaCharmander = 13, vidaSquirtle = 14;
    int opc1, opc2;
    bool continuar = true;
    do 
    {

        std::cout << "Elige a tu pokemon!\n\n";
        std::cout << "\n1: Bulbasar:\nVida: 13\nAtaque:1\n";
        std::cout << "\n2: Charmander:\nVida: 13\nAtaque:2\n";
        std::cout << "\n3: Squirtle:\nVida: 14\nAtaque:3\n\n";
        std::cin >> opc1;
        switch (opc1)
        {
        case 1:
            std::cout << "Escogiste Bulbasar!\n";
            std::cout << "Rival Charmander!\n";
            while (vidaBulbasar >= 0 && vidaCharmander >= 0)
            {
                std::cout << "1. Ataque\n2. Defensa\n";
                std::cin >> opc2;
                switch (opc2)
                {
                case 1: vidaCharmander = vidaCharmander - 2;
                    vidaBulbasar = vidaBulbasar - 3;
                    break;
                case 2: vidaBulbasar = vidaBulbasar + 2;
                    vidaCharmander = vidaCharmander + 1;
                    break;
                default:
                    std::cout << "Escoge opcion.\n";
                }
                std::cout << "Vida de Bulbasar: " << vidaBulbasar << "\n";
                std::cout << "Vida de Charmander: " << vidaCharmander << "\n";
                if (vidaBulbasar == 0)
                {
                    std::cout << "Ntp intentalo de nuevo" << std::endl;
                    break;
                }
                if (vidaCharmander == 0)
                {
                    std::cout << "Que bueno eres" << std::endl;
                    break;
                }
            }
            break;



        case 2:
            std::cout << "Escogiste Charmander!\n";
            std::cout << "Rival Squirtle!\n";
            while (vidaCharmander >= 0 && vidaSquirtle >= 0)
            {
                std::cout << "1. Ataque\n2. Defensa\n";
                std::cin >> opc2;
                switch (opc2)
                {
                case 1: vidaSquirtle = vidaSquirtle - 2;
                    vidaCharmander = vidaCharmander - 1;
                    break;
                case 2: vidaCharmander = vidaCharmander + 1;
                    vidaSquirtle = vidaSquirtle + 2;
                    break;
                default:
                    std::cout << "Escoge opcion.\n";
                }
                std::cout << "Vida de Charmander: " << vidaCharmander << "\n";
                std::cout << "Vida de Squirtle: " << vidaSquirtle << "\n";

                if (vidaCharmander == 0)
                {
                    std::cout << "Ntp intentalo de nuevo" << std::endl;
                    break;
                }
                if (vidaSquirtle == 0)
                {
                    std::cout << "Que bueno eres" << std::endl;
                    break;
                }
            }
            break;



        case 3:
            std::cout << "Escogiste Squirtle!\n";
            std::cout << "Tu rival Bulbasar!\n";
            while (vidaSquirtle >= 0 && vidaBulbasar >= 0)
            {
                std::cout << "1. Ataque\n2. Defensa\n";
                std::cin >> opc2;
                switch (opc2)
                {
                case 1: vidaBulbasar = vidaBulbasar - 2;
                    vidaSquirtle = vidaSquirtle - 3;
                    break;
                case 2: vidaSquirtle = vidaSquirtle + 2;
                    vidaBulbasar = vidaBulbasar + 1;
                    break;
                default:
                    std::cout << "Escoge una opcion valida.\n";
                }
                std::cout << "Vida de Squirtle: " << vidaSquirtle << "\n";
                std::cout << "Vida de Bulbasar: " << vidaBulbasar << "\n";

                if (vidaSquirtle == 0)
                {
                    std::cout << "Ntp intentalo de nuevo" << std::endl;
                    break;
                }
                if (vidaBulbasar == 0)
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

