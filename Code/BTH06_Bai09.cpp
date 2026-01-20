/*Viet ham tinh tong cac chu so cua so nguyen n; va chuong trinh de kiem tra ham da
viet.*/

#include<iostream>
using namespace std;

//Proccess: Tao ham va tinh tong cac chu so cua n
int tongChuSo(int n)
{
	int sd, tong = 0;
	if (n <= 0)
	{
		return false;
	}
	else
	{
		while (n > 0)
		{
			sd = n % 10;
			tong += sd;
			n = n / 10;
		}
		return tong;
	}
}
int main()
{
	int n;
	//Input: Nhap so nguyen n(n>0)
	//Output:In ra tong cac chu so cua n
	do
	{
		cout << "Nhap so nguyen n " << endl;
		cin >> n;
		if (tongChuSo(n)==false)
		{
			cout << "Nhap sai! Nhap lai" << endl;
		}
		else
		{
			cout << "Tong chu so cua " << n << " la " << tongChuSo(n);
		}
	} while (tongChuSo(n) == false);
	return 0;
}