/*Viet chuong trinh nhan vao chieu cao h cua mot hinh tam giac (h > 0). Xuat ra
man hinh tam giac co chieu cao h duoi dang cac dau *.*/

#include <iostream>
using namespace std;
int main()
{
	int h;
	do
	{
		//Input: Nhap chieu cao cua tam giac
		cout << "Nhap chieu cao tam giac: ";
		cin >> h;
		if (h <= 0)
			cout << "Nhap sai nhap lai\n";
	} while (h <= 0);

	//Process va Output: Tao hinh tam giac duoi dang dau *
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}