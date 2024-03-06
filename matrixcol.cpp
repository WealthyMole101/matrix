#include "matrixcol.h"

MatrixCol::MatrixCol(uint32_t row_index): _row_index(row_index)
{

}

uint32_t MatrixCol::Size()
{
    return _cells.size();
}

std::map<uint32_t, Cell> MatrixCol::GetCells()
{
    return _cells;
}
