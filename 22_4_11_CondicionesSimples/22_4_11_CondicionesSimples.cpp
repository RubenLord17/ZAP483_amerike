// Fortino Ruben Arias Lordmendez
// 22_4_11_CondicionesSimples.cpp

#include <iostream>
using namespace std;

int main()
{
    bool repetir = true;
    bool alergia;
    string Nombre, ciudad;
    int Edad, CP;
    float peso;
    double altura;
    do
    {
     cout << "consultorio medico\n";
     cout << "Ingresa tu nombre\n";
     cin >> Nombre;
     if (Nombre == "ruben")
     {
     cout << "nombre correcto\n";
     cout << "ingresa tu ciudad\n";
     cin >> ciudad;
     if (ciudad == "coatzacoalcos")
     {
     cout << "ciudad correcto\n";
     cout << "Ingresa tu peso\n";
     cin >> peso;
     if (peso == 80)
    {
     cout << "el peso esta bien\n";
     cout << "Ingresa tu altura\n";
     cin >> altura;
     if (altura == 1.70)
     {
     cout << "La altura coincide\n";
     cout << "Ingresa tu edad\n";
     cin >> Edad;
     if (Edad == 20)
     {
     cout << "La edad es correcta\n";
     cout << "Ingresa tu CP\n";
     cin >> CP;
     if (CP == 45538)
     {
     cout << "CP correcto\n";
     cout << "es alergico a algun medicamento o comida?, Escriba 0 si padece, 1 si no padece\n";
     cin >> alergia;
     if (alergia == false)
     {
     cout << "todo esta perfecto\n";
     }
     else
     {
     cout << "el dato no es correcto, escribelo de nuevo\n";
     }
     }
     else
     {
     cout << "el dato no es correcto, escribelo de nuevo\n";
     }
     }
     else
     {
     cout << "el dato no es correcto, escribelo de nuevo\n";
     }
     }
     else
     {
     cout << "el dato no es correcto, escribelo de nuevo\n";
     }
     }
     else
     {
     cout << "el dato no es correcto, escribelo de nuevo\n";
     }
     }
     else
     {
     cout << "el dato no es correcto, escribelo de nuevo\n";
     }
     }
     else
     {
     cout << "el dato no es correcto, escribelo de nuevo\n";
     }
     cout << "quisiera salir del programa o quedarse?\n";
     cout << "si desea quedarse escriba 1, si desea salir escriba 0\n";
     cin >> repetir;
    } while (repetir == true);
}


