#include <iostream>
#include "Diem.h"
using namespace std;

int main() {
    Diem diem;

    // Nhap toa do ban dau
    diem.Nhap();

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int chiThi;
        cin >> chiThi;

        if (chiThi == 1) {
            diem.NhanDoi();  // Nhan doi toa do
        }
        else if (chiThi == 2) {
            diem.GanGocToaDo();  // Gan ve goc toa do
        }
        else if (chiThi == 3) {
            int k;
            float d;
            cin >> k >> d;
            diem.TinhTien(k, d);  // Tinh tien diem
        }
        // Neu chi thi khac 1, 2, 3 thi khong lam gi ca
    }

    diem.Xuat();  // Xuat toa do cuoi cung

    return 0;
}
