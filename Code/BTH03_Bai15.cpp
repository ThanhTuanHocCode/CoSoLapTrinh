/*15.Viet chuong trinh nhan vao so do 3 canh cua 1 tam giac. Kiem tra xem 3 canh do
co hop le hay khong? Neu hop le thi tam giac do la loai tam giac gi (deu, vuong,
can, vuong can hay thuong) ?*/

#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap 3 canh tam giac
	int a, b, c;
	cout << "Nhap so do 3 canh cua tam giac" << endl;
	cin >> a >> b >> c;


	//Process: Kiem tra 3 canh tam giac co hop le hay khong
	if (a <= 0 || b <= 0 || c <= 0)
	{
		cout << "3 canh cua tam giac khong hop le" << endl;
	}
	else
	{
		cout << "3 canh cua tam giac hop le" << endl;
	}


	if (a == b && b == c)
	{
		cout << "Tam giac deu";
	}
	else if (a == b || a == c || b == c)
	{
		if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
		{
			cout << "Tam giac vuong can";
		}
		else
		{
			cout << "Tam giac can ";
		}
	}
	else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
	{
		cout << "Tam giac vuong";
	}
	else
	{
		cout << "Tam giac thuong";
	}


	return 0;
}