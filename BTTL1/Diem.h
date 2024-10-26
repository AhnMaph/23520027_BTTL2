#ifndef DIEM_H    
#define DIEM_H
#include <iostream>
using namespace std;

class Diem {
private:
    double iHoanh;
    double iTung;

public:
    Diem();  // Constructor mặc định
    Diem(double Hoanh, double Tung);  // Constructor có tham số
    Diem(const Diem &x);  // Constructor sao chép
    ~Diem();  // Destructor

    void Xuat() const;  // In tọa độ
    void GetHoanhDo() const;
    void GetTungDo() const;
    void SetTungDo(double x);
    void SetHoanhDo(double y);
    void TinhTien(double x);  // Tịnh tiến tọa độ
};

#endif // DIEM_H
