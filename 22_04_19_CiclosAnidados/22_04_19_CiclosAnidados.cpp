// Fortino Ruben Arias Lordmendez 
// 22_04_19_CiclosAnidados.cpp 
//

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{

    for (int f = 0; f < 10; f++)
    {
        cout << f;
        cout << "_";
        Sleep(1000);

        for (int c = 0; c < 10; c++)
        {
            cout << c;
        Sleep(300);
        }
        cout << "\n";
           
    }

   
    return 0;
}


