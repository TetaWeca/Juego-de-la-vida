#include "../include/cell2.hpp"

int cell2::getnewType()
{
    if (COND_SURV_TYPE2)
    {
        return CELLTYPE2;
    }
    else return CELLTYPE0;
}

std::ostream& cell2::show(std::ostream& os) const
{
    os << "2";

    return os;
}

std::ostream& operator<<(std::ostream& os, const cell2& cell)
{
    return cell.show(os);
}