#include "Diem.h"

// Constructor mac dinh
Diem::Diem() {
    iHoanh = 0;
    iTung = 0;
}

// Constructor co tham so
Diem::Diem(double Hoanh, double Tung) {
    iHoanh = Hoanh;
    iTung = Tung;
}

// Constructor sao chep
Diem::Diem(const Diem& x) {
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}

//Nhap toa do
void Diem::Nhap()
{
    cout << "x = "; 
    cin >> iHoanh;
    cout << "y = ";
    cin >> iTung;
    cout<< "\n";
}

// In toa do
void Diem::Xuat() const {
    cout << "x = " << iHoanh << " y = " << iTung << "\n";
}

// Lay hoanh do
double Diem::GetHoanhDo() const {
    return iHoanh;
}

// Lay tung do
double Diem::GetTungDo() const {
    return iTung;
}

// Gan tung do
void Diem::SetTungDo(double x) {
    iTung = x;
}

// Gan hoanh do
void Diem::SetHoanhDo(double y) {
    iHoanh = y;
}

// Tinh tien toa do
void Diem::TinhTien(double x, double y) {
    iTung += x;
    iHoanh += y;
}
