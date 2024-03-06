#ifndef CELL_H
#define CELL_H

#include <cstdint>
#include <vector>
#include <map>
#include <memory>
#include <iostream>

class Cell
{
public:
    Cell(){};
    Cell(const Cell &p)
    {
        row_index = p.row_index;
        column_index = p.column_index;
        value = p.value;
        parent_row = p.parent_row;
    }

    uint32_t column_index = -1;
    uint32_t row_index = -1;
    int value = -1;
    std::map<uint32_t, Cell>* parent_row;

    void operator=(int val)
    {
        value = val;

        if (value == -1) {
            parent_row->erase(column_index);
        } else {
            parent_row->insert({column_index, *this});
        }
    };
};
#endif // CELL_H
