
#include "cell.hpp"

    bool cell_t::getEstado() const
    {
        return estado_;
    }

    void cell_t::setEstado(bool new_estado) 
    {
        estado_ = new_estado;
    }

    void cell_t::setPos(const int x, const int y)
    {
        i_ = x;
        j_ = y;
    }

    void cell_t::actualizarEstado()
    {
        if (getEstado() == false && numalive_ == 3)
        {
            setEstado(true);
        }
        else if(getEstado() == true && numalive_ != 2 && numalive_ != 3)
        {
            setEstado(false);
        }
    }
    
     int cell_t::contarVecinas(board_t& tablerito)
     {
        numalive_ = 0;
        for (int i=-1;i<=1;i++)
        {
            for (int j=-1;j<=1;j++)
            {
                if (i_+i == i_ && j_+j ==j_)
                {
                    numalive_=numalive_;
                }
                else
                {
                    if (tablerito.at(i_+i,j_+j)->getEstado()==true)
                    {
                        numalive_++;
                    }
                }
                
            }
        }
        return numalive_;
     }

    std::ostream& operator<<(std::ostream& os, const cell_t& cell)    
    {
        if (cell.getEstado()==true)
        {
            os<<"X";
        }
        else 
        {
            os<<" ";
        }
        return os;
    }
