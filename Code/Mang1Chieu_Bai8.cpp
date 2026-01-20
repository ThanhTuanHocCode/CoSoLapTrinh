/*Viet ham tinh tong cac phan tu co trong mang so thuc toi da 15 phan tu */

#include<iostream>
using namespace std;
const int MAX_SIZE = 11;
double a[MAX_SIZE];

double tong(double a[],int n)
{
	cout << "Nhap " << n << " so thuc: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	double tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += a[i];
	}
	return tong;
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
			cout << "So luong phan tu khong hop le " << endl;
		}
	} while (n <= 0);
	cout << "Tong cac phan tu co trong mang so thuc la " << tong(a,n) << endl;

	return 0;
}