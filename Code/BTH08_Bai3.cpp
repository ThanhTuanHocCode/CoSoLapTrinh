/*Viet chuong trinh nhap vao mot mang so nguyen (toi da 100 phan tu), tim va in ra
phan tu lon nhat cua mang.*/

#include<iostream>
using namespace std;
int main()
{
	const int MAX_SIZE = 100;
	int a[MAX_SIZE];
	int n;
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0 || n > MAX_SIZE)
		{
			cout << "Nhap sai so luong phan tu " << endl;
		}
	} while (n <= 0 || n > MAX_SIZE);

	cout << "Nhap " << n << " so nguyen: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int lonNhat = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > lonNhat)
		{
			lonNhat = a[i];
		}
	}
	cout << "Phan tu lon nhat cua mang la " << lonNhat << endl;

	return 0;
}