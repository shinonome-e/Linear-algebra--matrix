/*
 * @Description: Basic.cpp
 * @version: 8.0
 * @Author: shinonome
 * @Date: 2021-03-08 23:34:13
 * @LastEditor: shinonome
 * @LastEditTime: 2021-03-09 00:41:42
 */

#include "classdef.h"
#include <iostream>
#include <iomanip>
using namespace std;

template <class Type, size_t m, size_t n>
void matrix<Type, m, n>::Create()
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> Matrix[i][j];
}

template <class Type, size_t m, size_t n>
void matrix<Type, m, n>::print(MAT mat)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(10) << mat[i][j];
        cout << endl;
    }
}

template <class Type, size_t m, size_t n>
void matrix<Type, m, n>::show()
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(10) << Matrix[i][j];
        cout << endl;
    }
}
