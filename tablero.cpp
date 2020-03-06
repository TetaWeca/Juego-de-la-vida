
#include "tablero.hpp"

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


