#ifndef TAMGIAC_H
#define TAMGIAC_H

#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

class TamGiac {
private:
    float x1, y1;  // Toa do diem A
    float x2, y2;  // Toa do diem B
    float x3, y3;  // Toa do diem C

public:
    TamGiac(float a1 = 0, float b1 = 0, float a2 = 0, float b2 = 0, float a3 = 0, float b3 = 0);

    void Nhap();                       // Nhap toa do 3 diem
    void TinhTien(float goc, float d); // Tinh tien tam giac
    void Xuat() const;                 // Xuat toa do 3 diem
};

#endif
