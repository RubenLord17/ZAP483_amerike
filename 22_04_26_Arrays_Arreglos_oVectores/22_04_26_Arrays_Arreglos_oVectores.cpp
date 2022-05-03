// Fortino Ruben Arias Lordmendez 
// 22_04_26_Arrays_Arreglos_oVectores.cpp 
// Practica de libros 

#include <iostream>
using namespace std;
#include <string>

int main()
{
    string titulos[5];
    string autores[5];
    int anios[5];
    int contador = 0;
    /*
    char autor[5]; //esto es un arreglo- Varios caracteres. 
    char autor2[5]:
    */
    for (int aux = 0; aux <= 4; aux++)
    {
    cout << "ingresa el titulo del libro # " << aux << std::endl;
    cin.ignore();
    getline (cin, titulos[aux]);
    cout << "ingresa el autor del libro # " << aux << std::endl;
    getline (cin, autores[aux]);
    cout << "ingresa el anio del libro # " << aux << std::endl;
    cin >> anios[aux];
    }

    for (int aux1 = 0; aux1 <= 4; aux1++)
    {
    std::cout << "el titulo del primer libro es: " << titulos[aux1] << std::endl;
    std::cout << "el año de publicacion del libro es: " << anios[aux1] << std::endl;
    std::cout << "el autor del libro es: " << autores[aux1] << std::endl;
    }
}