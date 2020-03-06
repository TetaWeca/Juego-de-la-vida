
#include "cell.hpp"

    bool cell_t::getEstado() const
    {
        return estado_;
    }

    void cell_t::setEstado(bool new_estado) 
    {
        estado_ == new_estado;
    }

    void cell_t::setPos(const int x, const int y)
    {
        i_ = x;
        j_ = y;
    }

    void cell_t::actualizarEstado()
    {
        if (getEstado() == 0 && numalive_ == 3)
        {
            setEstado(1);
        }
        else if(getEstado() == 1 && numalive_ != 2 && numalive_ != 3)
        {
            setEstado(0);
        }
    }
    
    // cell_t::contarVecinas()
    // {
    //     for (i=0;i<8;i++){
            
    //     }
    // }

    std::ostream& operator<<(std::ostream& os, const cell_t& cell)    
    {
        if (cell.getEstado()==1)
        {
            std::cout<<"X";
        }
        else 
        {
            std::cout<<" ";
        }
    }
