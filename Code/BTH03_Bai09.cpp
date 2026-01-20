
/*Viet chuong trinh co chuc nang nhu may tinh cam tay (su dung switch)
- Nhan vao 2 so nguyen va 1 phep toan ( + - * / )
- Xuat ra man hinh ket qua tuong ung.*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, b;
	cout << "Nhap a va b" << endl;
	cin >> a >> b;
	char phepToan;
	cout << "Nhap phep tinh" << endl;
	cin >> phepToan;
	switch (phepToan)
	{
		case '+':
			cout << a<<"+"<< b << "=" << a+b << endl;
			break;
		case '-':
			cout << a << "-" << b << "=" << a-b << endl;
			break;
		case '*':
			cout << a << "*" << b << "=" << a*b << endl;
			break;
		case '/':
		{
			if (b == 0)
				cout << "Loi" << endl;
			else
				cout << setprecision(2) << fixed << a << "/" << b << "=" << a/b << endl;
		}break;
		default:
			cout << "Nhap so sai";
			
    }


	return 0;

}