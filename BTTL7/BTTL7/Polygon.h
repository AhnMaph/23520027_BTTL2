#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Polygon {
private:
    int n;  // So diem cua da giac
    vector<float> x, y;  // Vectors luu hoanh do va tung do cua cac diem

public:
    Polygon();  // Constructor

    void Nhap();  // Nhap toa do cac dinh
    float TinhDienTich() const;  // Tinh dien tich da giac
};

#endif
