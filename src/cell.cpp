
#include "../include/cell.hpp"

    int cell_t::getX()
    {
        return i_;
    }

    int cell_t::getY()
    {
        return j_;
    }

    void cell_t::addturn()
    {
        turnsalive_=++turnsalive_;
    }

    int cell_t::getTurns()
    {
        return turnsalive_;
    }

    void cell_t::setPos(const int x, const int y)
    {
        i_ = x;
        j_ = y;
    }

    int cell_t::updateState()
    {
        if (COND_CELL_ALIVE_TYPE1)
        {
            return CELLTYPE1;
        }

        else if (COND_CELL_ALIVE_TYPE2)
        {
            return CELLTYPE2;
        }

        else if (COND_CELL_ALIVE_TYPE3)
        {
            return CELLTYPE3;
        }

        else return CELLTYPE0;
    }
    
    int cell_t::countAliveNeigh(board_t& boardie)
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
                    if (boardie.at(i_+i,j_+j)->getState()==true)
                    {
                        aliveneigh_++;
                    }
                }
                
            }
        }
        return aliveneigh_;
     }

    std::ostream& cell_t::show(std::ostream& os) const
    {
        os << " ";

        return os;
    }

    std::ostream& operator<<(std::ostream& os, const cell_t& cell)    
    {
        return cell.show(os);
    }