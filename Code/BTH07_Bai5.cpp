/*Viet cac ham sau day va chuong trinh kiem tra cac ham da viet:
a. Ham hoan doi gia tri 2 so nguyen.
b. Ham sap xep 2 so nguyen tang dan (su dung lai ham hoan doi o cau a)*/

#include<iostream>
using namespace std;

void hoanDoi2(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Gia tri 2 so nguyen sau khi hoan doi la " << a <<" "<< b << endl;
}
void tangDan(int a, int b)
{
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	cout << "Sap xep 2 so nguyen tang dan: " << a <<" "<< b << endl;
}

int main()
{
	int a, b;
	cout << "====CAU A====" << endl;
	cout << "Nhap 2 so nguyen a va b: ";
	cin >> a >> b;
	cout << "Gia tri cua 2 so nguyen truoc khi hoan doi la " << a <<" "<< b << endl;
	hoanDoi2(a, b);

	cout << "====CAU B====" << endl;
	tangDan(a, b);

	return 0;
}