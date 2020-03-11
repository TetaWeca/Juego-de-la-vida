
#include "../include/cell.hpp"

    bool cell_t::getState() const
    {
        return state_;
    }

    void cell_t::setState(bool new_state) 
    {
        state_ = new_state;
    }

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

    void cell_t::updateState()
    {
        if (getState() == false && aliveneigh_ == 3)
        {
            setState(true);
        }
        else if(getState() == true && aliveneigh_ != 2 && aliveneigh_ != 3)
        {
            setState(false);
        }
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

    std::ostream& operator<<(std::ostream& os, const cell_t& cell)    
    {
        if (cell.getState()==true)
        {
            os<<"X";
        }
        else if (cell.getState()==false)
        {
            os<<" ";
        }
        return os;
    }