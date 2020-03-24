
#pragma once 

#include "cell.hpp"
#define COND_SURV_TYPE3 (aliveneigh_ == 1 || aliveneigh_ == 5)

class cell3 : public cell_t
{
    public:

        cell3(int i,int j): 
        cell_t(i,j) {}

    int getnewType();     //reglas de nacimiento

    int getState() const {return TiposCelula::CELLTYPE3;}

    std::ostream& show(std::ostream& os) const; 

    friend std::ostream& operator<<(std::ostream& os, const cell_t& cell);
};