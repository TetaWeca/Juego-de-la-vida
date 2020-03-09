
#include "tablero.hpp"
#include <cassert>

board_t::board_t(int x, int y):
    x_(x+2),
    y_(y+2)
{
    celulis = new cell_t**[y_];
    for(int i=0;i<x_;i++)
    {
        celulis[i]= new cell_t*[x_];
        for(int j=0;j<y_;j++)
        {
            celulis[i][j] = new cell_t(i,j);
        }
    }
}

    void board_t::SetAlive(int x, int y)
    {
        assert(x < x_-2 && x > -1);
        assert(y < y_-2 && y > -1);  
        celulis[++x][++y]->setEstado(1);
    }

    void board_t::turno()
    {
        for (int i=1;i<x_-1;i++)
        {
            for (int j=1;j<y_-1;j++)
            {
                celulis[i][j]->contarVecinas(*this);
            }
        }
        for (int i=1;i<x_-1;i++)
        {
            for (int j=1;j<y_-1;j++)
            {
                celulis[i][j]->actualizarEstado();
            }
        }
        for (int i=1;i<x_-1;i++)
        {
            std::cout << "\n";

            for (int j=1;j<y_-1;j++)
            {
                std::cout << celulis[i][j];
            }
        }
    }

    cell_t* board_t::at(int x, int y)
    {
        return celulis[x][y];
    }

