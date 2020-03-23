
#pragma once 

#include "tablero.hpp"
#include "cell.hpp"
#define COND_SURV_TYPE1 (aliveneigh_ == 2 || aliveneigh_ == 3)

class cell1 : public cell_t
{
    public:

        cell1(int i,int j): 
        cell_t(i,j) {}

    int survivalCheck();     //reglas de nacimiento

    int getState() {return CELLTYPE1;}

    std::ostream& show(std::ostream& os) const; 

    friend std::ostream& operator<<(std::ostream& os, const cell_t& cell);
};