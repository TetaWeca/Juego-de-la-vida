
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

        bool getState() const;

        void setState(bool new_state);

        int getX();

        int getY();
        
        void setPos(int x, int y);

        void updateState();

        int countAliveNeigh(board_t& boardie);

        friend std::ostream& operator<<(std::ostream& os, const cell_t& cell);

};

