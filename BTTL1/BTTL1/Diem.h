#ifndef DIEM_H    
#define DIEM_H
#include <iostream>
using namespace std;

class Diem {
private:
    double iHoanh;
    double iTung;

public:
    Diem();  // Constructor mac dinh
    Diem(double Hoanh, double Tung);  // Constructor co tham so
    Diem(const Diem& x);  // Constructor sao chep
    void Nhap();
    void Xuat() const;  // In toa đo
    double GetHoanhDo() const;
    double GetTungDo() const;
    void SetTungDo(double x);
    void SetHoanhDo(double y);
    void TinhTien(double x, double y);  // Tinh tien toa do
};

#endif // DIEM_H
