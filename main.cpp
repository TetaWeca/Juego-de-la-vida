
#include <iostream>
#include "cell.hpp"
#include "cell.cpp"

int main(void){

    cell_t A(1);

    A.setPos(4,3);
    std::cout <<"La posición de la celula es: " << A.getX() << "," << A.getY() << "\n";

    return 0;

}