/*Cho mang so nguyen toi da 10 phan tu, hay tim so nho nhat va vi tri */

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

	cout << "Nhap " << n << " so nguyen: ";
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
	cout << "Cac so nguyen luu trong mang la: ";
	for (int i = 0; i <= n - 1; i++)
	{
		cout << a[i] << " ";
	}
	int  viTri = 0;
	for (int i = 1; i <= n - 1; i++)
	{
		if (a[i] < a[viTri])
		{
			a[viTri] = a[i];
			viTri = i;
		}
	}
	cout << endl;
	cout << "So nho nhat trong mang la " << a[viTri] << " va vi tri la " << viTri+1 << endl;

	return 0;
}