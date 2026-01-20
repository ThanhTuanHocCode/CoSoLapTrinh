/*Viet cac ham sau day va chuong trinh de kiem tra cac ham da viet:
a. Ham tinh chu vi hinh vuong.
b. Ham tinh dien tich vuong.

c. Ham xuat hinh vuong rong khi nhan vao so do canh va ky tu can xuat. Vi du voi
canh la 4 va ky tu nhap vao la * thi ket qua:
****
*  *
*  *
****  */

#include<iostream>
using namespace std;
//Proccess: Tao ham va tinh chu vi hinh vuong
int chuVi(int n)
{
		return n * 4;
}
//Proccess: Tao ham va tinh dien tich hinh vuong
int dienTich(int n)
{
		return n*n;
}
//Process: Tao ham va in ra hinh vuong duoi dang dau*
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
//Output: In ra ket qua sau khi lua chon
void luaChon(char c,int n)
{
		switch (c)
		{
		case '1':
		{
			cout << "Chu vi hinh vuong la " << chuVi(n) << endl;;
			break;
		}
		case'2':
		{
			cout << "Dien tich hinh vuong la " << dienTich(n) << endl;
			break;
		}
		case '3':
		{
			inHinhVuong(n);
			break;
		}
		default:
		{
			cout << "Nhap sai so trong menu " << endl;
		}
		}
}

int main()
{

	int n;
	char c, choose;
	do
	{
		//Input: Tao bang menu, nhap lua chon, nhap so nguyen
		system("cls");
		cout << "====MENU====" << endl
			<< "1.Tinh chu vi hinh vuong" << endl
			<< "2.Tinh dien tich hinh vuong" << endl
			<< "3.In hinh vuong duoi dang dau *" << endl
			<< ">>Lua chon: ";
		cin >> c;
		
		do
		{
			cout << "Nhap so nguyen n: ";
			cin >> n;
			if(n<=0)
			{
				cout << "Nhap sai! Nhap n>0 " << endl;
			}
		} while (n <= 0);
		luaChon(c, n);
		//Proccess: Tiep tuc su dung truong trinh khong?
		cout << "Ban co muon tiep tuc su dung chuong trinh khong(y/n)" << endl;
		cin >> choose;
		if (choose !='y' && choose != 'Y')
		{
			cout << "Cam on da su dung chuong trinh " << endl;
		}
		system("pause");
	} while (choose == 'y' || choose == 'Y'|| chuVi(n) == false || dienTich(n) == false);
	

	return 0;
}