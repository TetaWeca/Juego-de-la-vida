
#include "cell.hpp"

    bool cell_t::getEstado() const
    {
        return state_;
    }

    void cell_t::setEstado(bool new_state) 
    {
        state_ = new_state;
    }

    void cell_t::setPos(const int x, const int y)
    {
        i_ = x;
        j_ = y;
    }

    void cell_t::actualizarEstado()
    {
        if (getEstado() == false && aliveneigh_ == 3)
        {
            setEstado(true);
        }
        else if(getEstado() == true && aliveneigh_ != 2 && aliveneigh_ != 3)
        {
            setEstado(false);
        }
    }
    
    int cell_t::contarVecinas(board_t& tablerito)
     {
        aliveneigh_ = 0;
        for (int i=-1;i<=1;i++)
        {
            for (int j=-1;j<=1;j++)
            {
                if (i_+i == i_ && j_+j ==j_)
                {
                    aliveneigh_=aliveneigh_;
                }
                else
                {
                    if (tablerito.at(i_+i,j_+j)->getEstado()==true)
                    {
                        aliveneigh_++;
                    }
                }
                
            }
        }
        return aliveneigh_;
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