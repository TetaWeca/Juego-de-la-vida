#include "../include/cell2.hpp"

int cell2::survivalCheck()
{
    if (COND_SURV_TYPE2)
    {
        return CELLTYPE2;
    }
    else return CELLTYPE0;
}

std::ostream& cell_t::show(std::ostream& os) const
{
    os << "2";

    return os;
}

std::ostream& operator<<(std::ostream& os, const cell_t& cell)
{
    return cell.show(os);
}