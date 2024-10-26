#ifndef DAGIAC_H
#define DAGIAC_H

#include "Diem.h"

class DaGiac {
private:
    int n;         // So dinh cua da giac
    Diem* Dinh;    // Mang dong chua cac dinh

public:
    // Constructor và Destructor
    DaGiac(int soDinh = 3);  // Mac dinh là tam giac neu khong truyen so dinh

    // Phuong thuc nhap và xuat
    void Nhap();
    void Xuat() const;

    // Phuong thuc tinh tien, phong to, thu nho va quay
    void TinhTien(double x, double y);
    void PhongTo(double k);
    void ThuNho(double k);
    void Quay(double theta);  // Quay quanh goc toa do, goc theta (radian)
};

#endif
