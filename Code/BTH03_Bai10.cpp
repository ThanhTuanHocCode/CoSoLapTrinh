/*Viet chuong trinh nhan vao 1 so nguyen. Xuat ra man hinh so nguyen do la so
chan hay so le.*/

#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap so nguyen n
	int n;
	cout << "Nhap so nguyen n " << endl;
	cin >> n;
	//Process va Output: Kiem tra so chan hay le va xuat ra man hinh
	if (n % 2 == 0)
	{
		cout << n << " la so chan";
	}
	else
	{
		cout << n << " la so le ";
	}
	return 0;
}