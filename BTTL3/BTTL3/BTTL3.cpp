#include <iostream>
#include "DaGiac.h"
using namespace std;
const double pi = 3.141592653589793;
int main() {
    int soDinh;
    cout << "Nhap so dinh cua da giac: ";
    cin >> soDinh;

    DaGiac dg(soDinh);
    dg.Nhap();
    dg.Xuat();
    cout<< "Nhap vector tinh tien (a,b): ";
    double x, y;
    cin >> x >> y;
    dg.TinhTien(x,y);
    dg.Xuat();
    cout << "Nhap he so phong to: ";
    cin >> x;
    dg.PhongTo(x);
    dg.Xuat();

    cout << "Nhap he so thu nho: ";
    cin >> x;
    dg.ThuNho(x);
    dg.Xuat();

    cout << "Nhap goc quay radian: ";
    cin >> x;
    dg.Quay(x);
    dg.Xuat();

    return 0;
}
