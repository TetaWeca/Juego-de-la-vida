
#pragma once 

#include "tablero.hpp"
#include "cell.hpp"
#define COND_SURV_TYPE3 (aliveneigh_ == 1 || aliveneigh_ == 5)

class cell3 : public cell_t
{
    public:

    int actualizarEstado();     //reglas de nacimiento

    int getState() {return CELLTYPE3;}

    std::ostream& show(std::ostream& os) const; 

    friend std::ostream& operator<<(std::ostream& os, const cell_t& cell);
};