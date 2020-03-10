
#include <iostream>
#include "cell.hpp"
#include "cell.cpp"
#include "tablero.cpp"

int main(void){

    int rows,columns,condition,turns;

    std::cout << "¡Buenas, bienvenido al Juego de la Vida! Para empezar, necesitamos que pongas un número de filas para el tablero: ";
    std::cin >> rows;
    std::cout << "Y, lógicamente, el número de columnas también: ";
    std::cin >> columns;

    board_t tablero(rows,columns);

    int row,column;

    std::cout << "Vamos a hacer que una de las células esté viva. Dime el número de fila de la célula: ";
        std::cin >> row;
        std::cout << "Y el número de columna: ";
        std::cin >> column;

        tablero.SetAlive(row-1,column-1);
        std::cout << tablero;

    while (condition != 0)
    {
        std::cout << "¡Ahí está! ¿Quieres añadir otra célula más? ";
        std::cout << "\n[Si la respuesta es 'Sí' introduce un 1, si es un 'No' introduce un 0]: ";
        std::cin >> condition;

        if (condition != 0)
        {
        std::cout << "Dime el número de fila de la célula: ";
        std::cin >> row;
        std::cout << "Y el número de columna: ";
        std::cin >> column;

        tablero.SetAlive(row-1,column-1);
        std::cout << tablero;
        }
    }

    std::cout << "Ya casi estamos, dentro de nada podrás jugar a este maravilloso juego en el que no influyes en nada!!";
    std::cout << "\nAhora si te enrollas y pones el número de turnos que te gustaría ver, sería la pinga: ";
    std::cin >> turns;

    for (int i=0;i<turns;i++)
    {
        std::cout<<"\nTurno "<<i<<"\n";
        tablero.turn();
        std::cout << tablero;
    }


}