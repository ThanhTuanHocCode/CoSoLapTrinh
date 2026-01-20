/*Viet ham nhan vao 3 so ngay, thang, nam; tra ve so ngay cach ngay dau tien trong
nam. Viet chuong trinh kiem tra ham vua viet.
Vi du:
3 gia tri ngay-thang-nam la 1-1-2006 thi ket qua la 1.
3 gia tri ngay-thang-nam la 25-12-2006 thi ket qua la 359.*/

#include<iostream>
using namespace std;

bool namNhuan(int y)
{
	return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}
int cachNgayDauTien(int d, int m, int y)
{
	int tongNgay=0;
	for (int i = 1; i < m; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			tongNgay += 31;
		}
		else if (i == 2)
		{
			if (namNhuan(y))
			{
				tongNgay += 29;
			}
			else
			{
				tongNgay += 28;
			}
		}
		else
		{
			tongNgay += 30;
		}
	}
	return tongNgay + d;
}
int main()
{
	int d, m, y;
	do
	{
		cout << "Nhap ngay thang nam: ";
		cin >> d >> m >> y;
		if (d <= 0 || d > 31 || m <= 0 || m > 12 || y <= 0)
		{
			cout << "Ngay thang nam khong hop le" << endl;
		}
	} while (d <= 0 || d > 31 || m <= 0 || m > 12 || y <= 0);
	cout << d << "-" << m << "-" << y << " cach ngay dau tien trong nam la " << cachNgayDauTien(d, m, y) << endl;



	return 0;
}