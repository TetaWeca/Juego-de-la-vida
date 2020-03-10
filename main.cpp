
#include <iostream>
#include "cell.hpp"
#include "cell.cpp"
#include "tablero.cpp"

int main(void){

    int filas,columnas,condicion,turnos;

    std::cout << "Hola socio, mira una cosa, necesito que me des el tamaño del tablero so dime las filas:";
    std::cin >> filas;
    std::cout << "Y si me dices las columnas te la marcas tmb: ";
    std::cin >> columnas;

    board_t tablero(filas,columnas);

    while (condicion != 0)
    {
        int fila,columna;

        std::cout << "Ahora dime, ¿quieres añadir una célula viva?";
        std::cout << "\n[Si la respuesta es 'Sí' introduce un 1, si es un 'No' introduce un 0]: ";
        std::cin >> condicion;

        if (condicion != 0)
        {
        std::cout << "Dime el número de fila de la célula: ";
        std::cin >> fila;
        std::cout << "Y el número de columna: ";
        std::cin >> columna;

        tablero.SetAlive(fila-1,columna-1);
        std::cout << tablero;
        }
    }

    std::cout << "Ya casi estamos, dentro de nada podrás jugar a este maravilloso juego en el que no influyes en nada!!";
    std::cout << "\nAhora si te enrollas y pones el número de turnos que te gustaría ver, sería la pinga: ";
    std::cin >> turnos;

    for (int i=0;i<turnos;i++)
    {
        std::cout<<"\nTurno "<<i<<"\n";
        tablero.turno();
        std::cout << tablero;
    }


}