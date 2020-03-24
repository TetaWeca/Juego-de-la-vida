
#include "../include/tablero.hpp"
#include <cassert>

    board_t::board_t(int x, int y):
        x_(x+2),
        y_(y+2)
    {
        celulis = new cell_t**[y_];
        for(int i=0;i<y_;i++)
        {
            celulis[i]= new cell_t*[x_];
            for(int j=0;j<x_;j++)
            {
                celulis[i][j] = new cell_t(i,j);
            }
        }
    }

    board_t::~board_t()
    {
        for(int i=0;i<y_;i++)
        {
            for(int j=0;j<x_;j++)
            {
                delete celulis[i][j];
            }
        }
    }

    void board_t::SetAlive(int x, int y, int tipo)
    {
        assert(x < y_-2 && x > -1);
        assert(y < x_-2 && y > -1);  
        
        delete celulis[x+1][y+1];

        celulis[x+1][y+1] = cell_t::createCell(x+1,y+1,tipo);
    }

    void board_t::turn()
    {
        count_neigh();
        updateCells();
    }

    void board_t::count_neigh()
    {
        for (int i=1;i<y_-1;i++)
        {
            for (int j=1;j<x_-1;j++)
            {
                celulis[i][j]->countAliveNeigh(*this);
            }
        }
    }

    void board_t::updateCells()
    {
        for (int i=1;i<y_-1;i++)
        {
            for (int j=1;j<x_-1;j++)
            {
                int nuevotipo = celulis[i][j]->getnewType();
                    if(celulis[i][j]->getState() != nuevotipo)
                    {
                        SetAlive(i-1,j-1,nuevotipo);
                    }
            }
        }
    }

    cell_t* board_t::at(int x, int y)
    {
        return celulis[x][y];
    }

    void board_t::maxAlive()
    {
        int maxturns = 0;
        int posX = 0;
        int posY = 0;

        for (int i=1;i<y_-1;i++)
        {
            for (int j=1;j<x_-1;j++)
            {
               if (celulis[i][j]->getTurns() > maxturns)
               {
                maxturns = celulis[i][j]->getTurns();
                posX = celulis[i][j]->getX();
                posY = celulis[i][j]->getY();
               }
            }
        }

        std::cout << "\nLa célula que más turnos ha estado viva es la célula [" << posX <<"][" << posY << "]";
        std::cout << "\nY ha estado viva durante " << maxturns << " turnos.\n";
    }

    std::ostream& operator<<(std::ostream& os, const board_t& board)
    {
        os << " " << std::string(board.x_,'_')<<"\n";
         for (int i=0;i<board.y_;i++)
        {   
            os<<"|";

            for (int j=0;j<board.x_;j++)
            {
                os << *board.celulis[i][j];
            }
            
            os << "|"<<"\n";
        }
        os << " " << std::string(board.x_,'_');
        os << "\n";
        return os;
    };
