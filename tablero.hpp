
#pragma once

#include <iostream>
#include "cell.hpp"

class cell_t;

class board_t
{
    private:

        cell_t*** celulis;
        int x_;
        int y_;

    public:

        board_t(int x, int y);

        // cell_t* at(int x, int y);

        void SetAlive(int x, int y);

};