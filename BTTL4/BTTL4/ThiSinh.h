#ifndef THISINH_H
#define THISINH_H

#include <string>
using namespace std;

class ThiSinh {
private:
    string Ten;    // Ho ten thi sinh
    string MSSV;   // Ma so sinh vien
    int iNgay;     // Ngay sinh
    int iThang;    // Thang sinh
    int iNam;      // Nam sinh
    float fToan;   // Diem mon Toan
    float fVan;    // Diem mon Van
    float fAnh;    // Diem mon Anh

public:
    // Phuong thuc nhap va xuat
    void Nhap();
    void Xuat() const;

    // Phuong thuc tinh tong diem
    float Tong() const;

    // Phuong thuc lay MSSV cua thi sinh
    string getMSSV() const;
};

#endif
