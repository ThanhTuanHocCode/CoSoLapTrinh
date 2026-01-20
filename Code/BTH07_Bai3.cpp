/*3. Viet cac ham sau day va chuong trinh kiem tra cac ham da viet:
a. Ham tinh n! (n la so nguyen khong am).
b. Ham tinh to hop n chap k theo cong thuc:

c. Ham in tam giac Pascal co chieu cao h. Vi du voi h = 5:*/

#include<iostream>
using namespace std;

int giaiThua(int n)
{
	int tich = 1;
	for (int i = 1; i <= n; i++)
	{
		tich *= i;
	}
	return tich;
}

int toHop(int n, int k)
{
	return giaiThua(n) / (giaiThua(k)*giaiThua(n - k));
}

void inPascal(int h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << toHop(i, j);
		}
		cout << endl;
	}
}


int main()
{
	int n, k, h;
	cout << "====CAU A====" << endl;
	do
	{
		cout << "Nhap so nguyen n: ";
		cin >> n;
		if (n < 0)
		{
			cout << "Nhap sai! Nhap lai " << endl;
		}
	} while (n < 0);
	cout << n << "! = " << giaiThua(n) << endl;

	cout << "====CAU B====" << endl;
	do
	{
		cout << "Nhap n va k: ";
		cin >> n >> k;
		if (n < 0 || k < 0 || k<n)
		{
			cout << "Nhap sai! Nhap lai " << endl;
		}
	} while (n < 0 || k < 0 || k<n);
	cout << "To hop cua " << n << " chap " << k << " = " << toHop(n, k) << endl;

	cout << "====CAU C====" << endl;
	do
	{
		cout << "Nhap chieu cao: ";
		cin >> h;
		if (h < 0)
		{
			cout << "Nhap sai! Nhap lai " << endl;
		}
	} while (h < 0);
	cout << "Tam giac Pascal: " << endl;
	inPascal(h);



	return 0;
}