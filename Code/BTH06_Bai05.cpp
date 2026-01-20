/*Viet ham nhan vao so do canh, xuat ra hinh vuong gom cac dau * va chuong trinh de
kiem tra ham.*/

#include<iostream>
using namespace std;

//Process: Tao ham in hinh vuong duoi dang dau *
void inHinhVuong(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}


int main()
{
	//Input: Nhap canh hinh vuong(n>0)
	//Output: In hinh vuong duoi dang dau *
	int n;
	do
	{
		cout << "Nhap so do canh hinh vuong" << endl;
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai! Nhap n>0 " << endl;
		}
		else
		{
			inHinhVuong(n);
		}
	} while (n <= 0);

		return 0;
}