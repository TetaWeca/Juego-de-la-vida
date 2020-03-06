
#pragma once

#include <iostream>
#include "tablero.hpp"

//definición de la clase célula

class cell_t 
{

    private:

        bool estado_;
        int i_;
        int j_;

    public:
            cell_t(void):
            estado_(0),
            i_(0),
            j_(0) {}

            cell_t(int estado):
            estado_(estado),
            i_(0),
            j_(0) {}
       

        int getEstado() const;

        int getX();

        int getY();

        void setPos(int x, int y);

        void setEstado(int new_estado);

        int actualizarEstado();

        // int contarVecinas(&tablero tablerito);

};