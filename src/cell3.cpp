
#include "../include/cell3.hpp"

int cell3::actualizarEstado()
{
    if (COND_SURV_TYPE3)
    {
        return CELLTYPE3;
    }
    else return CELLTYPE0;
}

std::ostream& cell_t::show(std::ostream& os) const
{
    os << "3";

    return os;
}

std::ostream& operator<<(std::ostream& os, const cell_t& cell)
{
    return cell.show(os);
}