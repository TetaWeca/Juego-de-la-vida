
#include <iostream>
#include "cell.hpp"

    int cell_t::getEstado() const
    {
        return estado_;
    }

    void cell_t::setEstado(int new_estado)
    {
        estado_ == new_estado;
    }

    int cell_t::getX()
    {
        return i_;
    }

    int cell_t::getY()
    {
        return j_;
    }

    void cell_t::setPos(const int x, const int y)
    {
        i_ = x;
        j_ = y;
    }

    int cell_t::actualizarEstado()
    {
        int numvivas;

        if (getEstado()==0 && numvivas==3)
        {
            setEstado(1);
        }
        else if(getEstado()==1 && numvivas!=2 && numvivas !=3)
        {
            setEstado(0);
        }
    }
    
    // cell_t::contarVecinas()
    // {
    //     for (i=0;i<8;i++){
            
    //     }
    // }