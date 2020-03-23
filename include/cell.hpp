
#pragma once

#include <iostream>
#include "tablero.hpp"
#include "cell1.hpp"
#include "cell2.hpp"
#include "cell3.hpp"
#define COND_CELL_ALIVE_TYPE1 (aliveneigh_ == 3)
#define COND_CELL_ALIVE_TYPE2 (aliveneigh_ == 3 || aliveneigh_ == 6 || aliveneigh_ == 8)
#define COND_CELL_ALIVE_TYPE3 (aliveneigh_ == 3 || aliveneigh_ == 4 || aliveneigh_ == 6)

enum TiposCelula 
{
    CELLTYPE0,
    CELLTYPE1,
    CELLTYPE2,
    CELLTYPE3
};


class board_t;

class cell_t 
{

    protected:

        int type;
        int i_;
        int j_;
        int aliveneigh_;
        int turnsalive_;

    public:
            cell_t(int i, int j):
            i_(i),
            j_(j),
            type(0),
            aliveneigh_(0),
            turnsalive_(0) {}

        static cell_t* createCell(int i, int j, int type);

        virtual int getState() const {return CELLTYPE0;};

        void setState(bool new_state);

        int getX();

        int getY();
        
        int getTurns();
        
        void addturn();

        void setPos(int x, int y);

        virtual int getnewType();

        virtual int countAliveNeigh(board_t& boardie);

        virtual std::ostream& show(std::ostream& os) const; 

        friend std::ostream& operator<<(std::ostream& os, const cell_t& cell);

};

