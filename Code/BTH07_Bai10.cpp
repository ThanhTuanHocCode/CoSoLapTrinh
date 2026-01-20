/*10.Dua tren ham hoan doi gia tri 2 so da xay dung o bai tap 5, viet cac ham sau day va
chuong trinh de kiem tra ham:
a. Sap xep 2 so nguyen giam dan.
b. Sap xep 3 so nguyen tang dan.
c. Sap xep 3 so nguyen giam dan.*/

#include<iostream>
using namespace std;

void giamDan2(int a, int b)
{
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	cout << "Sap xep 2 so nguyen giam dan: " << a << " < " << b << endl;
}
void tangDan3(int a, int b, int c)
{
	while (a > b||b > c||a>c)
	{
		if (a > b)
		{
			int temp = a;
			a = b;
			b = temp;
		}
		if (b > c)
		{
			int temp = b;
			b = c;
			c= temp;
		}
		if (a > c)
		{
			int temp = a;
			a = c;
			c = temp;
		}
	}
	cout << "Sap xep 3 so nguyen theo thu tu tang dan: " << a << " < " << b << " < " << c << endl;
}
void giamDan3(int a, int b, int c)
{
	while (a < b||b < c||a<c)
	{
		if (a < b)
		{
			int temp = a;
			a = b;
			b = temp;
		}
		if (b < c)
		{
			int temp = b;
			b = c;
			c = temp;
		}
		if (a < c)
		{
			int temp = a;
			a = c;
			c = temp;
		}
	}
	cout << "Sap xep 3 so nguyen theo thu tu tang dan: " << a << " > " << b << " > " << c << endl;
}



int main()
{
	int a, b, c;
	cout << "=====CAU A=====" << endl;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	giamDan2(a, b);

	cout << "=====CAU B=====" << endl;
	cout << "Nhap 3 so nguyen: ";
	cin >> a >> b >> c;
	tangDan3(a, b, c);

	cout<< "=====CAU C=====" << endl;
	cout << "Nhap 3 so nguyen: ";
	cin >> a >> b >> c;
	giamDan3(a, b, c);


	return 0;
}