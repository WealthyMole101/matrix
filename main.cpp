#include <iostream>
#include <cassert>

#include "matrix.h"

#include "version.h"

int version() {
    return PROJECT_VERSION_PATCH;
}


using namespace std;

int main()
{
    Matrix matrix;
//    assert(matrix.Size() == 0);

//    auto a = matrix[0][0];
//    assert(a == -1);
//    assert(matrix.Size() == 0);

//    matrix[100][100] = 314;
//    assert(matrix[100][100] == 314);
//    assert(matrix.Size() == 1);

//    matrix[1][2] = 1;
//    matrix[1][2] = -1;

//    assert(matrix.Size() == 1);

    for (int i = 0; i < 10; i++) {
        matrix[i][i] = i;
    }

//    assert(matrix.Size() == 11);

    for (int i = 0; i < 10; i++) {
        matrix[i][9 - i] = 9 - i;
    }

//    assert(matrix.Size() == 21);

    for (int i = 1; i < 9; i++) {
        for (int j = 1; j < 9; j++) {
            cout << matrix[i][j].value << " ";
        }

        cout << endl;
    }

    cout << matrix.Size() << endl;
    matrix.Print();

    return 0;
}
