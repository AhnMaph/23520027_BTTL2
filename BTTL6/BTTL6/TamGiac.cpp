#include "TamGiac.h"

// Constructor khoi tao tam giac
TamGiac::TamGiac(float a1, float b1, float a2, float b2, float a3, float b3)
    : x1(a1), y1(b1), x2(a2), y2(b2), x3(a3), y3(b3) {}

// Phuong thuc nhap toa do 3 diem
void TamGiac::Nhap() {
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
}

// Phuong thuc tinh tien tam giac
void TamGiac::TinhTien(float goc, float d) {
    // Chuyen goc tu do sang radian
    float rad = goc * PI / 180;

    // Tinh cac thanh phan tinh tien theo truc x va y
    float dx = d * cos(rad);
    float dy = d * sin(rad);

    // Cap nhat toa do cac diem
    x1 += dx; y1 += dy;
    x2 += dx; y2 += dy;
    x3 += dx; y3 += dy;
}

// Phuong thuc xuat toa do 3 diem
void TamGiac::Xuat() const {
    cout << "(" << x1 << "," << y1 << ")\n";
    cout << "(" << x2 << "," << y2 << ")\n";
    cout << "(" << x3 << "," << y3 << ")\n";
}
