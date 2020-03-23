
#include "../include/cell1.hpp"

int cell1::getnewType()
{
    if (COND_SURV_TYPE1)
    {
        return CELLTYPE1;
    }
    else return CELLTYPE0;
}

std::ostream& cell_t::show(std::ostream& os) const
{
    os << "1";

    return os;
}

std::ostream& operator<<(std::ostream& os, const cell_t& cell)
{
    return cell.show(os);
}