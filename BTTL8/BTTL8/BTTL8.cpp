#include <iostream>
#include "List.h"
using namespace std;
int main()
{
    List p;
    int n;
    do {
        cin >> n;
        switch(n) {
        case -1: {
            break;
            }
        case 0: {
            double x;
            cin >> x;
            p.push_back(x);
            break;
        }
        case 1: {
            double x;
            cin >> x;
            p.pop(x);
            break;
        }
        case 2: {
            double x;
            cin >> x;
            p.popX(x);
            break;
        }
        case 3: {
            int x;
            double y;
            cin >> x >> y;
            p.DoiX(x, y);
            break;
            }
        default:
            cout << "Khong co lua chon nay\n";
        }
    } while (n != -1);
    p.Xuat();
    return 0;
}
