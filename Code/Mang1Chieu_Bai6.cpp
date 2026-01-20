/*Viet ham nhap, xuat cho mang so thuc toi da 10 phan tu */

#include<iostream>
using namespace std;

const int MAX_SIZE = 10;
double a[MAX_SIZE];
void nhap(double a[], int n)
{
	cout << "Nhap " << n << " so thuc ";
	for (int i = 0; i < n;i++)
	{
		cin >> a[i];
	}
}
void xuat(double a[], int n)
{
	cout << "So thuc luu tru trong mang la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int main()
{
	int n;

	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai! Nhap lai " << endl;
		}
	} while (n <= 0);

	nhap(a,n);
	xuat(a,n);


	return 0;
}