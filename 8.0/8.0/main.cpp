/*
 * @Description: main.cpp
 * @version: 8.0
 * @Author: shinonome
 * @Date: 2021-03-08 21:46:40
 * @LastEditor: shinonome
 * @LastEditTime: 2021-03-09 00:42:34
 */

#include <iostream>
#include "matrix.h"
using namespace std;

int main(int argc, const char *argv[])
{
    matrix<int, 2, 2> M;
    M.row_transform3(0, 1, 1);
    M.show();
    return 0;
}
