#include "Polygon.h"

// Constructor mac dinh khoi tao da giac
Polygon::Polygon() : n(3) {}

// Nhap so dinh va toa do cac diem
void Polygon::Nhap() {
    cin >> n;
    if (n <= 2) {
        cout << "So dinh phai lon hon 2!\n";
        return;
    }

    x.resize(n);
    y.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }
}

// Tinh dien tich da giac bang cong thuc Gauss (shoelace formula)
float Polygon::TinhDienTich() const {
    float area = 0;

    // Ap dung cong thuc tinh dien tich
    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n;  // Dam bao diem cuoi noi voi diem dau
        area += x[i] * y[j] - y[i] * x[j];
    }

    return abs(area) / 2;
}
