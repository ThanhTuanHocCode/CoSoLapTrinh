/*Viet chuong trinh nhan vao 1 so nguyen duong n > 1. Tinh va xuat ra man hinh
ket qua tong cac so le va tong cac so chan trong pham vi tu 1 den n.*/
#include <iostream>
using namespace std;
int main()
{
	//Input: Nhap n>1
	int n;
	do
	{
		cout << "Nhap n" << endl;
		cin >> n;
		if (n <= 1)
			cout << "Nhap sai! Nhap lai!" << endl;
	} while (n <= 1);
	//Process: Tinh tich so le va tong so chan
	int i = 1, tongLe = 0, tongChan = 0;
	while (i <= n)
	{
		if (i % 2 != 0)
		{
			tongLe+= i;
		}
		else
		{
			tongChan += i;
		}
		i++;
	}
	//Output: Xuat tich va tong
	cout << " Tong cac so le tu 1 den " << n << " la " <<tongLe << endl;
	cout << " Tong cac so chan tu 1 den " << n << " la " << tongChan << endl;
	return 0;

}