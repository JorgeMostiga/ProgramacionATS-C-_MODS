/*
    Busqueda Binaria By Alejandro Taboada Sanchez
    Url video explicado por Alejandro: https://www.youtube.com/watch?v=pxh4QFzDh-Q
    [Mod by Jorge Móstiga - https://jorgemostiga.pe/]
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int inf, sup, mitad, dato;
    char band = 'F'; // Puede tomar 3 valores (F, V, E) (Falso, Verdadero, Encontrado) ya que sin solo fuera 2 valores(V o F) sería de tipo boolean
    
    //Pidiendole al usuario un numero cualquiera.
    cout<<"Ingrese un numero para buscarlo en el arreglo: ";
    cin>>dato;
    // Algoritmo de la Busqueda Binaria
    inf = 0;
    sup = 5;

    // averiguando si el dato existe en el arreglo:
    for (int i = 0; i < 5; i++)
    {
        if (dato == numeros[i])
        {
            band = 'E';
            cout << "EL Numero si esta en el arreglo, Hallando la Posicion en la que esta dentro del arreglo:\n";
            system("pause");
            break;
        }
    }
    // Si existe (band=='E')
    if (band == 'E')
    {
        while (inf <= sup)
        {
            mitad = (inf + sup) / 2;

            if (numeros[mitad] == dato)
            {
                band = 'V';
                break;
            }
            else if (numeros[mitad] > dato)
            {
                sup = mitad;
                mitad = (inf + sup) / 2;
            }
            else if (numeros[mitad] < dato)
            {
                inf = mitad;

                mitad = (inf + sup) / 2;
            }
            else
            {
                cout << "Ups!";
            }
        }
    }
    // Fin del Algoritmo Busqueda Binaria
    if (band == 'V')
    {
        cout << "El numero a sido encontrado en la Posicion: " << mitad << endl;
    }
    else
    {
        cout << "No existe ese numero en el arreglo\n";
    }
    // system("pause");
    cout<<"Presiona una tecla para terminar el programa.";
    getch();
    return 0;
}
