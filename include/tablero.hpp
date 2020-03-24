
#pragma once

#include <iostream>
#include "cell.hpp"
#include "cell1.hpp"
#include "cell2.hpp"
#include "cell3.hpp"

class cell_t;

class board_t
{
    private:

        cell_t*** celulis;
        int x_;         //tamaño de las columnas, número de filas
        int y_;         //número de columnas, tamaño de las filas

    public:

        board_t(int x, int y);

        ~board_t();

        cell_t* at(int x, int y);

        void SetAlive(int x, int y, int tipo);

        void turn();

        void cuenta();

        void count_neigh();

        void updateCells();

        void maxAlive();

        friend std::ostream& operator<<(std::ostream& os, const board_t& board);
};    