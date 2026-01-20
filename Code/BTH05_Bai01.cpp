/*Viet chuong trinh nhan vao 1 so nguyen duong n(n > 0).Tinh va xuat tong cac
so tu 1 den n.*/
#include <iostream>
using namespace std;
int main()
{
	//Input: Nhap so nguyen n
	int n, tong = 0;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai! Nhap lai " << endl;
		}
	} while (n <= 0);
	//Process: Tinh tong
	for (int i = 1; i <= n; i++)
	{
	tong += i;
    }
	//Output: Xuat ra tong cac so nguyen 
	cout << "Tong tu 1 den " << n << " la: " << tong << endl;
	return 0;
}