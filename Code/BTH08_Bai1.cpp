/*1. Viet chuong trinh thuc hien cac cong viec sau day:
a) Khai bao mot mang alpha luu 50 phan tu kieu double.
b) Gan gia tri cua 25 phan tu dau tien la binh phuong cua chi so phan tu, 25 phan
tu con lai co gia tri la lap phuong cua chi so.
c) In cac gia tri trong mang alpha ra man hinh, moi dong gom 10 phan tu.*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	const int MAX_SIZE = 50;
	double alpha[MAX_SIZE];
	for (int i = 0; i < 25; i++)
	{
		alpha[i] = pow(i, 2);
	}
	for (int i = 25; i < 50; i++)
	{
		alpha[i] = pow(i, 4);
	}
	cout << "Gia tri trong mang alpha la " << endl;
	for (int i = 0; i < 50; i++)
	{
		cout <<setprecision(0)<<fixed<< alpha[i] << " ";
		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}
	}
	
	return 0;
}