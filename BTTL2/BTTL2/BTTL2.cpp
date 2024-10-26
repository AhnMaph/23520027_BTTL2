#include <iostream>
#include "TamGiac.h"
using namespace std;
int main()
{
    cout << "Nhap toa do tam giac ABC\n";
    TamGiac p;
    p.Nhap();
    p.Xuat();
    double x;
    cout << "So lan phong to (x>=1) ";
    cin >> x;
    p.PhongTo(x);
    p.Xuat();
    cout << "So lan thu nho (x<1) ";
    cin >> x;
    p.ThuNho(x);
    p.Xuat();
    cout << "Quay bao nhieu do (degree): ";
    cin >> x;
    p.Quay(x);
    p.Xuat();
    cout << "Tinh tien theo vector (a,b): ";
    double y;
    cin >> x >> y;
    p.TinhTien(x, y);
    p.Xuat();
    return 0;
}
