#include "matrix.h"


Matrix::Matrix()
{

}

uint32_t Matrix::Size()
{
    uint32_t size = 0;
    for (auto item: _matrix) {
        size += item.second.Size();
    }

    return size;
}

void Matrix::Print()
{
    for (auto row: _matrix) {
        for (auto item: row.second.GetCells()) {
            std::cout << item.second.row_index << " " << item.second.column_index << " " <<item.second.value << " " << std::endl;;
        }
    }
}
