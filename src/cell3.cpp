
#include "../include/cell3.hpp"

int cell3::getnewType()
{
    if (COND_SURV_TYPE3)
    {
        return CELLTYPE3;
    }
    else return CELLTYPE0;
}

std::ostream& cell3::show(std::ostream& os) const
{
    os << "3";

    return os;
}

std::ostream& operator<<(std::ostream& os, const cell3& cell)
{
    return cell.show(os);
}