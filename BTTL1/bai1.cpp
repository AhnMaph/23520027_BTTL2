#include<bits/stdc++.h>
#include"Diem.h"
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    Diem a;
    Diem b(x,y);
    Diem c(b);
    a.Xuat();
    b.Xuat();
    c.Xuat();
    return 0;
}