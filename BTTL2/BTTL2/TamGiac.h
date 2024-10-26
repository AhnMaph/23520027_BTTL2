#pragma once
class TamGiac
{
private:
	double Ax, Bx, Cx;
	double Ay, By, Cy;
public:
	void Nhap();
	void Xuat()const;
	void TinhTien(double x, double y);
	void PhongTo(double times);
	void ThuNho(double times);
	void Quay(double degree);
};

