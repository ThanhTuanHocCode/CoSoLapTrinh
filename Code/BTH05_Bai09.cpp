/*Viet chuong trinh nhan vao 1 so nguyen duong n (n > 0). Xuat ra man hinh bang
cuu chuong ung voi so nguyen n.*/

#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap so nguyen n
	int n;
	do
	{
		cout << "Nhap so nguyen " << endl;
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai! Nhap lai" << endl;
		}
	} while (n <= 0);

	int tich = 0;
	//Process va output: Tao bang cuu chuong va xuat ra man hinh
	cout << "Bang cuu chuong cua " << n << " la: " << endl;
	for (int i = 1; i <= 10; i++)
	{
		tich =n*i;
		cout << n << " x " << i << " = " << tich << endl;
	}
	

	return 0;
}