/*6. Viet cac ham sau day:
a. void menu(): hien thi menu gom 4 phep tinh cong, tru, nhan, chia
b. int cong(int a, int b): cong hai so nguyen
c. int tru(int a, int b): tru hai so nguyen.
d. double chia(int a, int b): chia hai so nguyen.
e. Chuong trinh in ra menu, yeu cau nguoi dung nhap vao hai so nguyen va chon
phep toan. Sau do in ra ket qua. Giao dien chuong trinh co dang nhu sau:
1. Cong
2. Tru
3. Nhan
4. Chia
Nhap 2 so nguyen: 4 5
Chon (1-4): 1
4 + 5 = 9
Tiep tuc (C/K): c
Nhap 2 so nguyen: 5 2
Chon (1-4): 4
5 / 2 = 2.5
Tiep tuc (C/K): k*/

#include<iostream>
#include<iomanip>
using namespace std;
void menu()
{
	cout << "======MENU======" << endl
		<< "1.Cong" << endl
		<< "2.Tru" << endl
		<< "3.Nhan" << endl
		<< "4.Chia" << endl;
}
int cong(int a, int b)
{
	return a + b;
}
int tru(int a, int b)
{
	return a - b;
}
int nhan(int a, int b)
{
	return a*b;
}
double chia(int a, int b)
{
	return a*1.0 / b;
}

int main()
{
	int a, b;
	char c;
	char luaChon;
	do
	{
		system("cls");
		menu();
		cout << "Nhap 2 so nguyen: ";
		cin >> a >> b;
		cout << "Chon (1-4): ";
		cin >> c;
		switch (c)
		{
		case'1':
		{
			cout << a << " + " << b << " = " << cong(a , b) << endl;
			break;
		}
		case'2':
		{
			cout << a << " - " << b << " = " << tru(a, b) << endl;
			break;
		}
		case'3':
		{
			cout << a << " x " << b << " = " << nhan(a, b) << endl;
			break;
		}
		case'4':
		{
			if (b==0)
			{
				cout << "Loi! khong the chia cho khong " << endl;
				break;
			}
			else
			{
				cout << a << " / " << b << " = " <<setprecision(2)<<fixed<<chia(a, b) << endl;
				break;
			}
		}
		default:
		{
			cout << "Lua chon khong hop le " << endl;
			break;
		}
		}
		cout << "Tiep tuc (C/K): ";
		cin >> luaChon;
		if (luaChon != 'C' && luaChon != 'c')
		{
			cout << "Cam on da su dung chuong trinh " << endl;
		}
		system("pause");
	} while (luaChon == 'c' || luaChon == 'C');


	return 0;
}