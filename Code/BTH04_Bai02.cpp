/*Viet chuong trinh nhan vao 1 so nguyen duong n > 1. Tinh va xuat tich cac so le
trong pham vi tu 1 den n.
*/
#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap so nguyen n>1
	int n;
	do
	{
		cout << "Nhap n" << endl;
		cin >> n;
		if (n <= 1)
			cout << "Nhap sai! Nhap lai!" << endl;

	} while (n <= 1);
	//Process: Tinh tich cac so le

	int i = 1,tich = 1;
	while (i <= n)
	{
		if (i % 2 != 0)
		{
			tich *= i;
		}
		i++;
	}
	//Output: Xuat tich cac so le
	cout << "Tich cac so nguyen tu 1 den " << n << " la " << tich << endl;



	return 0;
}