#include <iostream>
#include "TamGiac.h"
using namespace std;

int main() {
    TamGiac tamGiac;

    // Nhap toa do 3 diem của tam giac
    tamGiac.Nhap();

    // Nhap huong va do dai tinh tien
    float goc, doDai;
    cin >> goc >> doDai;

    // Thực hiện tinh tien tam giac
    tamGiac.TinhTien(goc, doDai);

    // Xuat ra toa do sau tinh tien
    tamGiac.Xuat();

    return 0;
}
