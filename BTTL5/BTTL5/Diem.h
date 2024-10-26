#ifndef DIEM_H
#define DIEM_H

#include <iostream>
using namespace std;

class Diem {
private:
    float x;  // Hoành độ
    float y;  // Tung độ

public:
    Diem(float hoanh = 0, float tung = 0);  // Constructor

    void Nhap();         // Nhập tọa độ điểm
    void Xuat() const;   // Xuất tọa độ điểm
    void NhanDoi();      // Nhân đôi hoành độ và tung độ
    void GanGocToaDo();  // Gán điểm về gốc tọa độ (0,0)
    void TinhTien(int k, float d);  // Tịnh tiến điểm theo hướng
};

#endif
