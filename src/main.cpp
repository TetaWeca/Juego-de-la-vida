
#include <iostream>
#include "cell.cpp"
#include "tablero.cpp"

int main(void){

    int rows,columns,condition,turns;

    std::cout << "¡Buenas, bienvenido al Juego de la Vida! Para empezar, necesitamos que pongas un número de filas para el tablero: ";
    std::cin >> rows;
    std::cout << "Y, lógicamente, el número de columnas también: ";
    std::cin >> columns;

    board_t board(columns,rows);

    int row,column;

    std::cout << board;

    std::cout << "Vamos a hacer que una de las células esté viva. Dime el número de fila de la célula: ";
        std::cin >> row;
        std::cout << "Y el número de columna: ";
        std::cin >> column;

        board.SetAlive(row-1,column-1);
        std::cout << board;

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

        board.SetAlive(row-1,column-1);
        std::cout << board;
        }
    }

    std::cout << "Ya casi estamos, ¡Sólo queda un paso! ";
    std::cout << "\nIntroduce el número de turnos que quieres ver: ";
    std::cin >> turns;

    for (int i=0;i<turns;i++)
    {
        std::cout<<"\nTurno "<<i+1<<"\n";
        board.turn();
        std::cout << board;
    }

    board.maxAlive();

}