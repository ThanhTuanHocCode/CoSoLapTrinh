/*Viet cac ham sau day va viet chuong trinh kiem tra cac ham da viet:
a. Ham tinh tong cac so tu 1 den n (n la so nguyen duong).
b. Ham tinh n! (n la so nguyen duong).*/

#include<iostream>
using namespace std;
//Input: Tao ham tong tu 1 den n (n>0)
int tong(int n)
{
	int tong = 0;
	if (n <= 0)
	{
		return 1;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			tong += i;
		}
		return tong;
	}
}

//Process: Tao ham n! (n>0)
int giaiThua(int n)
{
	int tich = 1;
	if (n <= 0)
	{
		return 1;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			tich *= i;
		}
		return tich;
	}
}

int main()
{
	//Input: Nhap so nguyen duong, neu nhap so am nhap lai cho den khi nhap dung so nguyen duong
	
	int n;
	do
	{
		cout << "Nhap so nguyen duong " << endl;
		cin >> n;
		if (tong(n)==1||giaiThua(n)==1)
		{
			cout << "Nhap sai! Nhap so nguyen duong(n>0) " << endl;
		}
		else
		{
			//Output: In tong va n!
			cout << "Tong cac so tu 1 den " << n << " la: " << tong(n) << endl;
			cout << n << "! la: " << giaiThua(n) << endl;
		}
	} while (tong(n) == 1 || giaiThua(n) == 1);

	return 0;
}