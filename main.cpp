
#include <iostream>
#include "cell.hpp"
#include "cell.cpp"

int main(void){

    int filas,columnas,condicion,turnos;

    std::cout << "Hola socio, mira una cosa, necesito que me des el tamaño del tablero so:\n";
    std::cin >> "Dime el número de filas: \n" >> filas;
    std::cin >> "Y ya si me das el número de columnas te la mandas: " >> columnas;

    board_t tablero(filas,columnas);

    while (condicion != 0)
    {
        int fila,columna;

        std::cout << "Ahora dime, ¿quieres añadir una célula viva?";
        std::cout << "\n[Si la respuesta es 'Sí' introduce un 1, si es un 'No' introduce un 0 ";
        std::cin >> condicion;

        std::cin >> "Entonces introduce el número de fila de la célula que quieres viva: " >> fila;
        std::cin >> "¡SORPRESA!. Mete también el núm de columna anda" >> columna;

        tablero.SetAlive(fila,columna);
    }

    std::cout << "Ya casi estamos, dentro de nada podrás jugar a este maravilloso juego en el que no influyes en nada!!";
    std::cout << "\nAhora si te enrollas y pones el número de turnos que te gustaría ver, sería la pinga";
    std::cin >> turnos;

    for (int i=0;i<turnos;i++)
    {
        tablero.turno();
    }

    // tablero.at(0,0)->setEstado(1);

    // tablero.at(0,0)->actualizarEstado();


}