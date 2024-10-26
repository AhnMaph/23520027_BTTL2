#include "TamGiac.h"
#include<iostream>
#include<cmath>
using namespace std;
void TamGiac::Nhap()
{
	cout << "Nhap A: "; 
	cin >> Ax >> Ay;
	cout << "Nhap B: ";
	cin >> Bx >> By;
	cout << "Nhap C: ";
	cin >> Cx >> Cy;
}
void TamGiac::Xuat()const
{
	cout << "\nToa do A: ";
	cout<< Ax <<" " << Ay << "\n";
	cout << "Toa do B: ";
	cout << Bx <<" " << By << "\n";
	cout << "Toa do C: ";
	cout << Cx <<" " << Cy << "\n";
}
void TamGiac::TinhTien(double x, double y)
{
	Ax +=x;
	Bx +=x;
	Cx +=x;
	Ay +=y;
	By +=y;
	Cy +=y;
}
void TamGiac::PhongTo(double times) // phong to voi goc toa do O(0;0)
{
	if (times < 1)
	{
		cout << "Phong to phai la 1 so lon hon 1\n";
		return;
	}
	Ax *=times;
	Bx *=times;
	Cx *=times;
	Ay *=times;
	By *=times;
	Cy *=times;
}
void TamGiac::ThuNho(double times) // phong to voi goc toa do O(0;0)
{
	if (times >= 1)
	{
		cout << "Thu nho phai la 1 so nho hon 1\n";
		return;
	}
	Ax *=times;
	Bx *=times;
	Cx *=times;
	Ay *=times;
	By *=times;
	Cy *=times;
}
void TamGiac::Quay(double degree)
{
	double radian = degree * (3.141592653589793) / 180.0;

	// Tinh cos và sin cua goc
	double cosValue = cos(radian);
	double sinValue = sin(radian);

	double new_Ax = Ax * cosValue - Ay * sinValue;
	double new_Ay = Ax * sinValue + Ay * cosValue;
	Ax = new_Ax;
	Ay = new_Ay;

	double new_Bx = Bx * cosValue - By * sinValue;
	double new_By = Bx * sinValue + By * cosValue;
	Bx = new_Bx;
	By = new_By;

	double new_Cx = Cx * cosValue - Cy * sinValue;
	double new_Cy = Cx * sinValue + Cy * cosValue;
	Cx = new_Cx;
	Cy = new_Cy;
}