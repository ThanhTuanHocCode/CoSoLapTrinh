/*Cho mang gom cac so nguyen co gia tri trong khoang tu 1 den k (k < 100). Viet
ham in ra so lan xuat hien cua moi phan tu trong mang.*/

// CACH 1
#include<iostream>
using namespace std;

const int MAX_SIZE = 100;
int a[MAX_SIZE];
void xuatHien(int a[], int n,int k)
{
	cout << "Nhap " << n << " phan tu ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int soLan[MAX_SIZE] = { 0 };
	for (int i = 0; i < n; i++)
	{
		soLan[a[i]]++;
	}
	for (int i = 1; i <= k; i++)
	{
		if (soLan[i] > 0)
		{
			cout << i << " xuat hien " << soLan[i] << " lan " << endl;
		}
	}
}
int main()
{
	int n, k;
	do
	{
		cout << "Nhap so luong phan tu ";
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai so luong " << endl;
		}
	} while (n <= 0);
	do {
		cout << "Nhap gia tri k (k < 100): ";
		cin >> k;
		if (k >= 100) {
			cout << "Gia tri k phai nho hon 100, vui long nhap lai." << endl;
		}
	} while (k >= 100);

	xuatHien(a, n,k);
	return 0;
}

//CACH 2
#include<iostream>
using namespace std;

const int MAX_SIZE = 100;
int a[MAX_SIZE];
int b[MAX_SIZE];
void PHAN_TU_PHAN_BIET(int a[], int b[], int n, int &m)
{
	m = 0;
	b[m] = a[0];
	m = 1;
	bool kiemTra = true;
	for (int i = 1; i < n; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			kiemTra = true;
			if (a[i] == a[j])
			{
				kiemTra = false;
				break;
			}
		}
		if (kiemTra == true)
		{
			b[m] = a[i];
			m++;
		}
	}
}

void xuatHien(int a[], int b[], int n, int &m)
{
	PHAN_TU_PHAN_BIET(a, b, n, m);
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (b[i] == a[j])
			{
				dem++;
			}
		}
		cout << b[i] << " xuat hien " << dem << " lan " << endl;
	}
}

int main()
{
	int n;
	int m;
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0 || n > MAX_SIZE)
		{
			cout << "So luong phan tu khong hop le" << endl;
		}
	} while (n <= 0 || n > MAX_SIZE);

	cout << "Nhap " << n << " phan tu so nguyen: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	xuatHien(a, b, n, m);
	return 0;
}