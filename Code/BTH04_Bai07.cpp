/*
Viet chuong trinh co giao dien la mot menu lua chon 1 trong 4 phep tinh (+ - * / )
va lua chon thoat. Khi nguoi dung chon lua chon nao se xu ly tuong ung.*/

#include <iostream>
using namespace std;
int main()
{
	//Input: tao bang menu va nhap so nguyen
	char c;
	int a, b;
	do
	{
		system("cls");
		cout << "=====MENU=====" << endl;
		cout << "(+) PHEP CONG" << endl;
		cout << "(-) PHEP TRU" << endl;
		cout << "(*) PHEP NHAN" << endl;
		cout << "(/) PHEP CHIA" << endl;
		cout << "(x) KET THUC" << endl;
		cout << ">>LUA CHON:" << endl;
		cin >> c;
		
		if (c == '+' || c == '-' || c == '*' || c == '/')
		{
			cout << "Nhap a va b" << endl;
			cin >> a >> b;
		}
		switch (c)
		{
		case'+':
			cout << "(+) PHEP CONG" << endl;
			cout << a << "+" << b << "=" << a + b << endl; break;
		case'-':
			cout << "(-) PHEP TRU" << endl;
			cout << a << "-" << b << "=" << a - b << endl; break;
		case'*':
			cout << "(*) PHEP NHAN" << endl;
			cout << a << "*" << b << "=" << a * b << endl; break;
		case'/':
			cout << "(/) PHEP CHIA" << endl;
			if (b == 0)
			{
				cout << "Loi" << endl; break;
			}
			else
			{
				cout << a << "/" << b << "=" << a / b << endl; break;
			}
		case 'x': case'X':
			cout << "Thank you using progamming" << endl;
			break;

		default:
			cout << "Nhap sai" << endl;
			
		}
		system("pause");
		
	} while (c!='x'&& c!='X');

	
	

		return 0;
}