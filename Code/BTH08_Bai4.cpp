/*Viet chuong trinh nhap vao mot mang so nguyen (toi da 100 phan tu), tinh va in ra
tong va gia tri trung binh cua cac phan tu trong mang.*/
#include<iostream>
using namespace std;
int main()
{
	const int MAX_SIZE = 100;
	int a[MAX_SIZE];
	int n;
	int tong = 0;
	int trungBinh;
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0 || n > MAX_SIZE)
		{
			cout << "Nhap sai so luong phan tu" << endl;
		}
	} while (n <= 0 || n > MAX_SIZE);
	cout << "Nhap " << n << " so nguyen: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		tong += a[i];
	}
	trungBinh = tong / n;

	cout << "Tong cac phan tu trong mang la " << tong << endl;
	cout << "Gia tri trung binh trong mang la " << trungBinh << endl;


	return 0;
}