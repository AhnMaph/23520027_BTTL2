#include "Diem.h"

// Constructor mặc định
Diem::Diem() {
    iHoanh = 0;
    iTung = 0;
}

// Constructor có tham số
Diem::Diem(double Hoanh, double Tung) {
    iHoanh = Hoanh;
    iTung = Tung;
}

// Constructor sao chép
Diem::Diem(const Diem &x) {
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}

// Destructor
Diem::~Diem() {
    cout << "Doi tuong Diem bi huy\n";
}

// In tọa độ
void Diem::Xuat() const {
    cout << "x = " << iHoanh << " y = " << iTung << "\n";
}

// Lấy hoành độ
void Diem::GetHoanhDo() const {
    cout << "x = " << iHoanh << "\n";
}

// Lấy tung độ
void Diem::GetTungDo() const {
    cout << "y = " << iTung << "\n";
}

// Gán tung độ
void Diem::SetTungDo(double x) {
    iTung = x;
}

// Gán hoành độ
void Diem::SetHoanhDo(double y) {
    iHoanh = y;
}

// Tịnh tiến tọa độ
void Diem::TinhTien(double x) {
    iTung += x;
    iHoanh += x;
}
