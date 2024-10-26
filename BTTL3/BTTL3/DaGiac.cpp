#include "DaGiac.h"
#include <iostream>
#include <cmath>  // Cho sin() va cos()
using namespace std;

// Constructor: Khoi tao mang dong voi so dinh
DaGiac::DaGiac(int soDinh) {
    n = soDinh;
    Dinh = new Diem[n];  // Cap phat mang dong cho cac dinh
}

// Nhap toa do cac dinh cua da giac
void DaGiac::Nhap() {
    cout << "Nhap toa do cho " << n << " dinh:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Dinh " << i + 1 << ":\n";
        Dinh[i].Nhap();  // Goi ham Nhap() cua lop Diem
    }
}

// Xuat toa do cac dinh cua da giac
void DaGiac::Xuat() const {
    cout << "Toa do cac dinh cua da giac:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Dinh " << i + 1 << ": ";
        Dinh[i].Xuat();  // Goi ham Xuat() cua lop Diem
    }
}

// Tinh tien da giac theo vector (dx, dy)
void DaGiac::TinhTien(double x, double y) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].TinhTien(x,y);  // Su dung ham TinhTien cua lop Diem
    }
}

// Phong to da giac voi he so k (k > 1)
void DaGiac::PhongTo(double k) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].SetTungDo(Dinh[i].GetTungDo() * k);
        Dinh[i].SetHoanhDo(Dinh[i].GetHoanhDo() * k);
    }
}

// Thu nho da giac voi he so k (0 < k < 1)
void DaGiac::ThuNho(double k) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].SetTungDo(Dinh[i].GetTungDo() * k);
        Dinh[i].SetHoanhDo(Dinh[i].GetHoanhDo() * k);
    }
}

// Quay da giac quanh goc toa do mot goc theta (radian)
void DaGiac::Quay(double theta) {
    for (int i = 0; i < n; ++i) {
        double x = Dinh[i].GetTungDo();
        double y = Dinh[i].GetHoanhDo();

        // Tinh toa do moi sau khi quay
        double xNew = x * cos(theta) - y * sin(theta);
        double yNew = x * sin(theta) + y * cos(theta);

        // Cap nhat toa do moi
        Dinh[i].SetTungDo(xNew);
        Dinh[i].SetHoanhDo(yNew);
    }
}
