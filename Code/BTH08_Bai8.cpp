/*Viet ham dem so lan xuat hien cua mot phan tu trong mot mang so nguyen. Ham
nhan vao ba tham so: mang a, so phan tu n va phan tu x. Ham tra ve so lan xuat
hien cua x trong mang a. Viet chuong trinh kiem tra ham.*/

#include<iostream>
using namespace std;

const int MAX_SIZE = 100;
int a[MAX_SIZE];
void xuatHien(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			dem++;
		}
	}
	cout << "So lan xuat hien cua phan tu " << x << " trong mang a la " << dem << endl;
}
int main()
{
	int n;
	int x;
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0)
		{
			cout << "So luong phan tu khong hop le " << endl;
		}
	} while (n <= 0);
	cout << "Nhap " << n << " phan tu: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Nhap phan tu de kiem tra so lan xuat hien cua x trong mang a: ";
	cin >> x;



	xuatHien(a, n, x);


	return 0;
}