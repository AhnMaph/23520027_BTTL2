#include <iostream>
#include "Polygon.h"
using namespace std;

int main() {
    Polygon polygon;

    // Nhap thong tin da giac
    polygon.Nhap();

    // TInh va xuat dien tich
    float area = polygon.TinhDienTich();
    cout << area << "\n";

    return 0;
}
