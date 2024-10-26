#include<iostream>
#include"Diem.h"
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    Diem a(x,y);
    Diem b;
    Diem c(a); // copy constructor
    a.TinhTien(1,1);
    a.Xuat();
    b.SetHoanhDo(1.1);
    cout<< "x = " << b.GetHoanhDo()<<"\n";
    c.SetTungDo(2.2);
    cout<<"y = " << c.GetTungDo() << "\n";
    return 0;
}