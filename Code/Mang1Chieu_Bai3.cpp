/*Cho mang so nguyen toi da 10 phan tu, tinh tong so khong chia het cho 3 va tich chia het cho 3*/
#include<iostream>
using namespace std;
int main()
{
	const int MAX_SIZE = 10;
	int a[MAX_SIZE], n;
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai! Nhap lai " << endl;
		}
	} while (n <= 0);
	cout << "Nhap 10 so nguyen: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int tong = 0, tich = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 3 == 0)
		{
			tich *= a[i];
		}
		else
		{
			tong += a[i];
		}
	}
	cout << "Tong cac so khong chia het cho 3 la " << tong << endl;
	cout << "Tich cac so chia het cho 3 la " << tich << endl;


	return 0;
}