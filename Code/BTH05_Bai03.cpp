/*Viet chuong trinh yeu cau nhap so nguyen duong n. Tinh va xuat ket qua cac
phep tinh sau:*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	//Input: Nhap so nguyen
	int n;
	double tong1 = 0, tong2 = 0, tong3 = 0;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai nhap lai\n";
	} while (n <= 0);

	//Process: Tinh tong cua s1, s2, s3
	for (int i = 1; i <= n; i++)
	{
		tong1 += pow(i, 2);
		tong2 += 1.0 / i;
		tong3 += 1.0 / (2 * i - 1);
	}

	//Output: Xuat ra ket qua
	cout << "S1 = " << tong1 << endl << "S2 = " << setprecision(2) << fixed << tong2 << endl << "S3 = " << tong3 << endl;
	return 0;
}