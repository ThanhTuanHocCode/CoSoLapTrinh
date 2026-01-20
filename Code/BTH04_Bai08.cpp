/*Viet chuong trinh nhan vao 1 so nguyen n > 0. Tinh va xuat tong cac chu so le
cua n.*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	int sd;
	int tong = 0;
	do
	{
		cout << "Nhap so nguyen n: " << endl;
		cin >> n;
		if (n <=0)
		{
			cout << "Nhap sai! Nhap lai " << endl;
		}
	} while (n <= 0);

	int i = n;
	while (i>0)
	{
		sd = i % 10;
		if (sd% 2 != 0)
		{
			tong += sd;
		}
		i = i / 10;
	}
	cout << "Tong cac so le cua " << n << " la " << tong << endl;
	return 0;
}