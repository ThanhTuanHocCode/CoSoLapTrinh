/*Cho mang so nguyen toi da 10 phan tu.Hay tim va xuat ra so luong chan va le*/

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
	cout << "Nhap " << n << " so nguyen ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Cac so nguyen luu trong mang la ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	int soLe = 0, soChan = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			soChan++;
		}
		else
		{
			soLe++;
		}
	}
	cout << endl;
	cout << "Co " << soChan << " la so chan " << endl;
	cout << " Co " << soLe << " la so le " << endl;

	return 0;
}