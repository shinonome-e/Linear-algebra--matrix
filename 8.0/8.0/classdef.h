/*
 * @Description: classdef.h
 * @version: 8.0
 * @Author: shinonome
 * @Date: 2021-03-08 22:04:26
 * @LastEditor: shinonome
 * @LastEditTime: 2021-03-09 00:42:04
 */

#ifndef Basedef_h
#define Basedef_h

#include <array>
using namespace std;

template <class Type, size_t m, size_t n>
class matrix //想法：做两个基类     Single_Mat_Base    Multi_Mat_Base 然后在两个基类中写构造函数和析构函数
{
public:
    typedef array<array<Type, n>, m> MAT; //二维数组
private:
    MAT Matrix;
    void Create();

public:
    void show();
    matrix() { Create(); }
    void print(MAT mat);
    template <typename T>
    void row_transform1(int i, T k); // i 是所做变换的行数 - 1
    void row_transform2(int i, int j);
    template <typename T>
    void row_transform3(int i, int j, T k); // 将第 i - 1 行的 k 倍加到第 j - 1 行
};

#endif /* Basedef_h */
