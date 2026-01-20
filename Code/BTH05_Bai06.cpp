/*Viet chuong trinh nhan vao 2 so nguyen duong la chieu dai d va chieu rong r cua
hinh chu nhat. Xuat ra hinh chu nhat duoi dang cac dau *.*/

#include <iostream>
using namespace std;
int main()
{
	//Input: Nhap chieu dai va chieu rong
	int cd, cr;
	do
	{
		cout << "Nhap chieu dai va chieu rong hinh chu nhat: ";
		cin >> cd >> cr;
		if (cd <= 0 || cr <= 0)
			cout << "Nhap sai nhap lai\n";
	} while (cd <= 0 || cr <= 0);

	//Process va Output: Xuat ra hinh chu nhat theo dau *
	for (int i = 0; i < cd; i++)
	{
		for (int j = 0; j < cr; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
		return 0;
}