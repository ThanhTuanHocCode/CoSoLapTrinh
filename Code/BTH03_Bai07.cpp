//Viet chuong trinh nhan vao thang. Xuat ra man hinh so ngay cua thang do
#include <iostream>
using namespace std;
int main()
{
	//I: Nhap thang vao 
	int t;
	cout << "Nhap thang: ";
	cin >> t;
	//P: So ngay cua thang
	//O: In ra man hinh
	if (t == 1 && 3 && 5 && 7 && 8 && 10 && 12)
		cout << "So ngay cua thang " << t << " la " << "31 " << endl;
	else if (t == 2)
		cout << "So ngay cua thang 2 la 28 hoac 29\n";
	else
		cout << "So ngay cua thang " << t << " la " << "30 " << endl;
	return 0;
}