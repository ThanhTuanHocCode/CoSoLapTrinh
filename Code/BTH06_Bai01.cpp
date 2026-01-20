/*Viet cac ham sau day va chuong trinh kiem tra cac ham da viet:
a. Ham tinh dien tich hinh chu nhat.
b. Ham tinh chu vi hinh chu nhat*/

#include<iostream>
using namespace std;

//Process: Tao ham tinh dien tich=chieu dai* chieu rong
double dienTich(double cd, double cr)
{
	if (cd > 0 && cr > 0)
	{
		return cd*cr;
	}
	else
	{
		return 1;
	}
}

//Process: Tao ham tinh chu vi=(chieu dai + chieu rong)*2
double chuVi(double cd, double cr)
{
	if (cd > 0 && cr > 0)
	{
		return (cd + cr) * 2;
	}
	else
	{
		return 1;
	}
}

int main()
{
	//Input: Nhap 2 so nguyen
	double a, b;
	cout << "Nhap chieu dai va chieu rong " << endl;
	cin >> a >> b;

	//Output: In ra dien tich va chu vi hinh chu nhat
	if (dienTich(a, b) == 1)
	{
		cout << "Nhap sai chieu dai va chieu rong " << endl;
	}
	else
	{
		cout << "Dien tich hinh chu nhat la: " << dienTich(a, b) << endl;
		cout << "Chu vi hinh chu nhat la: " << chuVi(a, b) << endl;
	}
	return 0;
}