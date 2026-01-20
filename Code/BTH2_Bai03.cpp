/*
Bai 3: Viet chuong trinh yeu cau nhap ten, so ngay lam viec va tien cong 1 ngay,
sau do in ra ten va tien luong nhan duoc 
(tien luong = so ngay lam viec × tien cong 1 ngay).
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	//Input: Nhap ten name(string), so ngay lam viec days(int), tien cong 1 ngay wage(double)
	string name;
	int days;
	double wage;
	 
	cout << "Nhap ten: " << endl;
	cin >> name;
	
	cout << "So ngay lam viec: " << endl;
	cin >> days;
	
	cout << "Tien cong 1 ngay: " << endl;
	cin >> wage;


	//Process: Tinh tien luong: so ngay lam viec * tien cong 1 ngay
	double salary = days * wage;

		//Output: Tien luong
		cout << "Tien luong:" << salary << endl;


	return 0;

}