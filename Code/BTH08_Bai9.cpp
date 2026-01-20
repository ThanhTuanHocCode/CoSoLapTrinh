/*Cac he so cua da thuc anxn + an−1xn−1 + ... + a0 duoc luu trong mang a. Viet ham
nhan vao mang a, bac cua da thuc n, gia tri x va tra ve gia tri cua da thuc.*/

#include<iostream>
#include<cmath>
using namespace std;

const int MAX_SIZE = 100;
int a[MAX_SIZE];
int daThuc(int a[], int n, int x)
{
	int tong = 0;
	for (int i = n; i >= 0; i--)
	{
		tong = tong + a[i] * pow(x, i);
	}
	return tong;
}



int main()
{
	int soLuong, n, x;
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> soLuong;
		if (soLuong <= 0)
		{
			cout << "So luong phan tu khong hop le " << endl;
		}
	} while (soLuong <= 0);
	cout << "Nhap " << soLuong << " phan tu ";
	for (int i = 0; i < soLuong; i++)
	{
		cin >> a[i];
	}

	cout << "Nhap bac cua da thuc n: ";
	cin >> n;

	cout << "Nhap gia tri cua x: ";
	cin >> x;

	cout << "Ket qua cua da thuc trong mang la " << daThuc(a, n, x) << endl;



	return 0;
}