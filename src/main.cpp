
#include <iostream>
#include "cell.cpp"
#include "cell1.cpp"
#include "cell2.cpp"
#include "cell3.cpp"
#include "tablero.cpp"

int main(void){

    int rows,columns,condition,turns,type;

    std::cout << "¡Buenas, bienvenido al Juego de la Vida! Para empezar, necesitamos que pongas un número de filas para el tablero: ";
    std::cin >> rows;
    std::cout << "Y, lógicamente, el número de columnas también: ";
    std::cin >> columns;

    board_t board(columns,rows);

    int row,column,preprogram;

    std::cout << board;

    std::cout << "¿Quieres usar una configuración preprogramada? Responde 1 si la respuesta es sí y 0 si es no: ";
    std::cin >> preprogram;

        if (preprogram !=0)
        {
            board.setAlive(12,12,1);
            board.setAlive(12,11,1);
            board.setAlive(11,12,1);
            board.setAlive(11,13,1);
            board.setAlive(13,12,1);

            std::cout << board;
        }
    

        std::cout << "Vamos a hacer que una de las células esté viva. Dime el número de fila de la célula: ";
        std::cin >> row;
        std::cout << "Y el número de columna: ";
        std::cin >> column;
        std::cout << "¿Qué tipo de célula debería ser?: ";
        std::cin >> type;

        board.setAlive(row-1,column-1,type);
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
        std::cout << "¿Qué tipo de célula debería ser?: ";
        std::cin >> type;

        board.setAlive(row-1,column-1,type);
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

    cell1 A(1,1);

}