
#pragma once

#include <iostream>
#include "cell.hpp"

class cell_t;

class board_t
{
    private:

        cell_t*** celulis;
        int x_;         //número de columnas
        int y_;         //número de filas

    public:

        board_t(int x, int y);

        ~board_t();

        cell_t* at(int x, int y);

        void SetAlive(int x, int y);

        void turn();

        void count_neigh();

        void updateCells();

        friend std::ostream& operator<<(std::ostream& os, const board_t& board);
};    