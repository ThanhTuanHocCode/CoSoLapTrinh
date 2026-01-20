//Viet chuong trinh nhan vao nam. Xuat ra man hinh thong bao nam do la nam nhuan hay nam khong nhuan
#include <iostream>
using namespace std;
int main()
{
	//I: Nhap so nam
	int n;
	cout << "Nhap nam: ";
	cin >> n;
	//P: Tinh nam nhuan hay nam khong nhuan
	//O: Xuat ra man hinh
	if (n % 400 == 0 || n % 4 == 0 && n % 100 != 0)
		cout << "Nam nhuan\n";
	else
		cout << "Nam khong nhuan\n";
	return 0;

}