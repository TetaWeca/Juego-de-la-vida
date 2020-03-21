
#pragma once 

#include "tablero.hpp"
#include "cell.hpp"
#define COND_SURV_TYPE2 (aliveneigh_ == 2 || aliveneigh_ == 4 || aliveneigh_ == 5)

class cell2 : public cell_t
{
    public:

    int actualizarEstado();     //reglas de nacimiento

    int getState() {return CELLTYPE2;}

    std::ostream& show(std::ostream& os) const; 

    friend std::ostream& operator<<(std::ostream& os, const cell_t& cell);
};