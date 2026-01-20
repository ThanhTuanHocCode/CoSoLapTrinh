/*Viet chuong trinh nhan vao 1 so nguyen duong n. Xuat ra man hinh so chu so va
tong cac chu so cua n. Vi du: n = 3523 thi ket qua la n co 4 chu so va tong cac
chu so la 13.*/

#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap n
	int n;
	do
	{
		cout << "Nhap n" << endl;
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai! Nhap lai!" << endl;
	} while (n <= 0);
	//Process: n co bao nhieu chu so va tong
	int t = n, chuSo = 0, dem, tong = 0;
	while (t>0)//3524
	{
		dem=t % 10;//4
		chuSo++;//1
		tong += dem;
		t /= 10;
	}

		//Output: Xuat ra man hinh
	cout << n << " co " << chuSo << " chu so " << "va tong cac chu so la " << tong << endl;

	return 0;

}