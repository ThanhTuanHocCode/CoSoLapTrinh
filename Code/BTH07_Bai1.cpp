/*1. Viet ham kiem tra 1 gia tri nam nhan vao co phai la nam nhuan hay khong. Viet
chuong trinh kiem tra lai ham vua xay dung. (Xem lai nam nhuan o bai tap thuc hanh
3).*/

#include<iostream>
using namespace std;

bool namNhuan(int y)
{
	return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}


int main()
{
	int y;
	do
	{
		cout << "Nhap nam: ";
		cin >> y;
		if (y <= 0)
		{
			cout << "Nhap sai Nhap lai " << endl;
		}
	} while (y <= 0);
	if (namNhuan(y))
	{
		cout << y << " la nam nhuan " << endl;
	}
	else
	{
		cout << y << " khong la nam nhuan" << endl;
	}


	return 0;
}