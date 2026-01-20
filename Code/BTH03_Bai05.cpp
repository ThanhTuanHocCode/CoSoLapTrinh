//Viet chuong trinh nhan vao diem tich luy cua 1 sinh vien. Xuat ra man hinh ket qua xep loai cua sinh vien do dua tren diem tich luy
#include <iostream>
using namespace std;
int main()
{
//I: Nhap vao so diem tich luy
	double n;
	cout << "Nhap vao so diem tich luy: ";
	cin >> n;
	if (n < 0 || n > 10)
		cout << "Khong hop le\n";
//P: So sanh
//O: In ra man hinh ket qua
	else if (n > 9)
		cout << "Xuat sac\n";
	else if (n > 8)
		cout << "Gioi\n";
	else if (n > 7)
		cout << "Kha\n";
	else if (n > 6)
		cout << "Trung binh kha\n";
	else if (n > 5)
		cout << "Trung binh\n";
	else
		cout << "Yeu\n";
	return 0;
}