#include <iostream>
#include "ThiSinh.h"
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    cin.ignore();  // Xoa ky tu xuong dòng sau khi nhap so

    // Tao mang thi sinh
    ThiSinh* dsThiSinh = new ThiSinh[n];

    // Nhap thong tin cho tung thi sinh
    for (int i = 0; i < n; ++i) {
        cout << "\nNhap thong tin thi sinh thu " << i + 1 << ":" << "\n";
        dsThiSinh[i].Nhap();
    }

    cout << "\nCac thi sinh co tong diem lon hon 15:" << "\n";
    for (int i = 0; i < n; ++i) {
        if (dsThiSinh[i].Tong() > 15) {
            dsThiSinh[i].Xuat();
            cout << "-------------------------" << "\n";
        }
    }

    // Tìm thi sinh co điem cao nhất
    int chiSoCaoNhat = 0;
    for (int i = 1; i < n; ++i) {
        if (dsThiSinh[i].Tong() > dsThiSinh[chiSoCaoNhat].Tong()) {
            chiSoCaoNhat = i;
        }
    }

    cout << "\nThi sinh co tong diem cao nhat:" << "\n";
    dsThiSinh[chiSoCaoNhat].Xuat();

    // Kiem tra xem thi sinh co điem cao nhat co ma so sinh vien trung với MSSV cua ban khong
    string mssvBan;
    cout << "\nNhap MSSV cua ban: ";
    getline(cin, mssvBan);

    if (dsThiSinh[chiSoCaoNhat].getMSSV() == mssvBan) {
        cout << "\nThi sinh co tong diem cao nhat chinh la ban!" << "\n";
    }
    else {
        cout << "\nThi sinh co tong diem cao nhat khong phai ban." << "\n";
    }

    return 0;
}
