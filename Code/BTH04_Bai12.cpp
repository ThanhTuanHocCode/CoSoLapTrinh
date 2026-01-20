/*12.Viet chuong trinh nhan vao 1 so nguyen n > 0. Tach tung chu so cua n va the
hien chung duoi dang cach nhau mot khoang cach.
Vi du n = 3456 thi ket qua tung chu so la 3 4 5 6*/

#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap so nguyen
	int n;
	int sd;
	int sdn=0;
	do
	{
		cout << "Nhap so nguyen: " << endl;
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai! Nhap lai" << endl;
		}

	} while (n <= 0);

	//Process: Tinh so dao nguoc, dao nguoc tiep roi tach.
	//Output: Xuat ra ket qua
	cout << "Ket qua tung chu so la: ";
	while (n > 0)
	{
		sd = n % 10;
		sdn = sdn * 10 + sd;
		n = n / 10;
	}
	while (sdn>0)
	{
		sd = sdn % 10;
		cout << sd<< " " ;
		sdn = sdn / 10;
	}

	
}