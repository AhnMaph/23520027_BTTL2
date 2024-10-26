#include "ThiSinh.h"
#include <iostream>
using namespace std;

// Nhap thong tin thi sinh
void ThiSinh::Nhap() {
    cout << "Nhap ten: ";
    getline(cin, Ten);

    cout << "Nhap MSSV: ";
    getline(cin, MSSV);

    cout << "Nhap ngay sinh: ";
    cin >> iNgay;

    cout << "Nhap thang sinh: ";
    cin >> iThang;

    cout << "Nhap nam sinh: ";
    cin >> iNam;

    cout << "Nhap diem Toan: ";
    cin >> fToan;

    cout << "Nhap diem Van: ";
    cin >> fVan;

    cout << "Nhap diem Anh: ";
    cin >> fAnh;

    cin.ignore();  
}

// Xuat thong tin thi sinh
void ThiSinh::Xuat() const {
    cout << "Ten: " << Ten << "\n";
    cout << "MSSV: " << MSSV << "\n";
    cout << "Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << "\n";
    cout << "Diem Toan: " << fToan << "\n";
    cout << "Diem Van: " << fVan << "\n";
    cout << "Diem Anh: " << fAnh << "\n";
    cout << "Tong diem: " << Tong() << "\n";
}

// Tinh tong diem cua thi sinh
float ThiSinh::Tong() const {
    return fToan + fVan + fAnh;
}

// Lay ma so sinh vien
string ThiSinh::getMSSV() const {
    return MSSV;
}