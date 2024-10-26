
#include "Diem.h"
// Constructor khoi tao toa do diem
Diem::Diem(float hoanh, float tung) : x(hoanh), y(tung) {}

// Nhap toa do diem
void Diem::Nhap() {
    cin >> x >> y;
}

// Xuat toa do diem duoi dang (x, y)
void Diem::Xuat() const {
    cout << "(" << x << "," << y << ")" << "\n";
}

// Nhan doi hoanh do va tung do
void Diem::NhanDoi() {
    x *= 2;
    y *= 2;
}

// Dat toa do diem ve goc (0, 0)
void Diem::GanGocToaDo() {
    x = 0;
    y = 0;
}

// Tinh tien diem theo huong k và do dich chuyen d
void Diem::TinhTien(int k, float d) {
    if (k == 0) {
        x += d;  // Tinh tien theo truc x
    }
    else {
        y += d;  // Tinh tien theo truc y
    }
}
