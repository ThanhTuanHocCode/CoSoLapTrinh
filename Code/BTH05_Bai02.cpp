/*Viet chuong trinh cho nguoi dung nhap gia tri cho m so nguyen. Tinh va xuat
tong cac so vua nhap. Giao dien chuong trinh khi thuc hien duoc mo phong o vi
du sau:*/
#include <iostream>
using namespace std;
int main()
{
	//Input: Nhap so luong va so nguyen
	int n, m, tong = 0;
	do
	{
		cout << "Ban can bao nhieu so: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai nhap lai\n";
	} while (n <= 0);

	//Process: Tinh tong va tao giao dien
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so thu " << i + 1 << ": ";
		cin >> m;
		tong += m;
	}
	//Output: Xuat ket qua
	cout << "Tong " << n << " so vua nhap la: " << tong << endl;
	return 0;
}