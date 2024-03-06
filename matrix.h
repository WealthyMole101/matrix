#ifndef MATRIX_H
#define MATRIX_H

#include <cstdint>
#include <vector>
#include <map>
#include <memory>
#include <iostream>

#include "matrixcol.h"
#include "cell.h"

inline bool operator==(const Cell& c, const int& val)
{
    return c.value == val;
};

inline bool operator==(const int& val, const Cell& c)
{
    return val == c.value;
};

class Matrix
{
public:
    Matrix();
    uint32_t Size();
    void Print();

    MatrixCol& operator[](uint32_t index)
    {
        auto it = _matrix.find(index);
        if (it == _matrix.end()) {
            // Количество строк будет всегда увеличиваеться. В вычислении размера учавствуют не пустые строки.
            _matrix.insert({index, MatrixCol(index)});
        }

        return _matrix[index];
    }

private:
    std::map<uint32_t, MatrixCol> _matrix;
};

#endif // MATRIX_H
