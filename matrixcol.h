#ifndef MATRIXCOL_H
#define MATRIXCOL_H

#include <cstdint>
#include <vector>
#include <map>
#include <memory>
#include <iostream>

#include "cell.h"

class MatrixCol
{
public:
    MatrixCol()
    {

    };
    explicit MatrixCol(uint32_t row_index);
    uint32_t Size();
    std::map<uint32_t, Cell> GetCells();

    Cell& operator[](uint32_t index)
    {
        auto it = _cells.find(index);
        if (it == _cells.end()) {
            _default_cell.row_index = _row_index;
            _default_cell.column_index = index;
            _default_cell.parent_row = &_cells;
            _default_cell.value = -1;
            return _default_cell;
        }

        return _cells[index];
    }

private:
    std::map<uint32_t, Cell> _cells;
    uint32_t _row_index;
    Cell _default_cell;
};


#endif // MATRIXCOL_H
