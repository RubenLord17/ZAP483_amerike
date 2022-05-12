// 22_05_10_Tamaño_de_Arrays.cpp
// Fortino Ruben Arias Lordmendez 
//

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    /*
    int edades[3][2] = { {1,2},{9,8},{14,21} };
    int filas = (sizeof(edades) / sizeof(edades[0]));
    cout << filas;
    int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
    cout << columnas;
    */


    /*
    srand(time(NULL));
    int matriz[3][3] = { {1,1,1},{1,1,1},{1,1,1} };
    for (int i = 0; i< (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
        
        
        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
        {
            cout << "[" << i << "]" <<"["<< j << "]" << "=" << matriz[i][j] << endl;
        }
        cout << "\n";
    }

    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
        {
            matriz[i][j]=rand() % 10;
            std::cout << matriz[i][j];
        }
        cout << "\n";
        
    }
    */


    /*
    int matriz[5][5] = { {1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1} };
    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {


        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
        {
            cout << "[" << i << "]" << "[" << j << "]" << "=" << matriz[i][j] << endl;
        }
        cout << "\n";
    }

    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
        {
            matriz[i][j] = rand() % 10;
            std::cout << matriz[i][j];
        }
        cout << "\n";

    }
    */

    int matriz[10][10] = { {1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1} };
    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {


        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
        {
            cout << "[" << i << "]" << "[" << j << "]" << "=" << matriz[i][j] << endl;
        }
        cout << "\n";
    }

    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
        {
            matriz[i][j] = rand() % 10;
            std::cout << matriz[i][j];
        }
        cout << "\n";

    }
    return 0;
}