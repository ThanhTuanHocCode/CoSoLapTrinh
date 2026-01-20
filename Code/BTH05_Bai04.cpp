/*Viet chuong trinh nhan vao 1 so nguyen duong n. Tinh va xuat ket qua tinh n giai
thua.*/
#include <iostream>
using namespace std;
int main()
{
	//Input: Nhap so nguyen
	int n, giaiThua = 1;
	do 
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai nhap lai\n";
	} while (n <= 0);

	//Process:Tinh n!
	for (int i = 1; i <= n; i++)
	{
		giaiThua *= i;
	}

	//Output: Xuat ra ket qua
	cout << "Giai thua cua " << n << " la: " << giaiThua << endl;
	return 0;
}