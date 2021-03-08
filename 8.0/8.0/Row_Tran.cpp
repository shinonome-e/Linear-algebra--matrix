/*
 * @Description: Row_Tran.cpp
 * @version: 8.0
 * @Author: shinonome
 * @Date: 2021-03-09 00:15:51
 * @LastEditor: shinonome
 * @LastEditTime: 2021-03-09 00:43:36
 */

#include "classdef.h"

template <class Type, size_t m, size_t n>
template <typename T>
void matrix<Type, m, n>::row_transform1(int i, T k)
{
    for (int j = 0; j < n; j++)
        Matrix[i][j] *= k;
}

template <class Type, size_t m, size_t n>
void matrix<Type, m, n>::row_transform2(int i, int j)
{
    Matrix[i].swap(Matrix[j]);
}

template <class Type, size_t m, size_t n>
template <typename T>
void matrix<Type, m, n>::row_transform3(int i, int j, T k)
{
    for (int l = 0; l < n; l++)
        Matrix[j][l] += k * Matrix[i][l];
}
