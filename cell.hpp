
#pragma once

#include <iostream>
#include "tablero.hpp"

class board_t;

class cell_t 
{

    private:

        bool estado_;
        int i_;
        int j_;
        int numalive_;

    public:
            cell_t(int i, int j):
            estado_(0),
            i_(i),
            j_(j),
            numalive_(0) {}

         /*    cell_t(int estado):
            estado_(estado),
            i_(0),
            j_(0), 
            numalive_(0) {} */
       

        bool getEstado() const;

        void setPos(int x, int y);

        void setEstado(bool new_estado);

        void actualizarEstado();


        int contarVecinas(board_t& tablerito);

};

std::ostream& operator<<(std::ostream& os, const cell_t& cell);