//Viet chuong trinh nhan vao thang va nam. Xuat ra man hinh so ngay cua thang do.
#include <iostream>
using namespace std;
int main()
{
	//I: Nhap vao thang nam
	int t, n;
	cout << "Nhap thang: ";
	cin >> t;
	cout << "Nhap nam: ";
	cin >> n;
	//P
	if (t < 0 || t > 12)
		cout << "Thang hong hop le\n";
	else if (t == 1 && 3 && 5 && 7 && 8 && 10 && 12)
		cout << "So ngay cua thang " << t << " nam " << n << " la 31 ngay " << endl;
	else if (t == 2)
		cout << "So ngay cua thang 2 la 28 hoac 29\n";
	else
		cout << "So ngay cua thang " << t << " nam " << n << " la 30 ngay " << endl;
}