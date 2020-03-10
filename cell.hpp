
#pragma once

#include <iostream>
#include "tablero.hpp"

class board_t;

class cell_t 
{

    private:

        bool state_;
        int i_;
        int j_;
        int aliveneigh_;

    public:
            cell_t(int i, int j):
            state_(false),
            i_(i),
            j_(j),
            aliveneigh_(0) {}

        bool getEstado() const;

        void setEstado(bool new_state);
        
        void setPos(int x, int y);

        void actualizarEstado();

        int contarVecinas(board_t& tablerito);

        friend std::ostream& operator<<(std::ostream& os, const cell_t& cell);

};

