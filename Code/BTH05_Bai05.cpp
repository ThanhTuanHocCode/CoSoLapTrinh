/*Viet chuong trinh nhan vao 2 so nguyen duong n1 va n2 (n1 < n2). Dem va xuat
ket qua xem tu n1 den n2 co bao nhieu so la so nguyen to? Biet rang so nguyen
to la so tu 2 tro len, chi chia het cho 1 va chinh ban than no.*/
#include <iostream>
using namespace std;
int main()
{
	//Input: Nhap 2 so nguyen
	int n1, n2;
	do
	{
		cout << "Nhap n va m: ";
		cin >> n1 >> n2;
		if (n2 <= n1 || n1 < 2 || n2 < 2)
			cout << "Nhap sai nhap lai\n";
	} while (n2 <= n1 || n1 < 2 || n2 < 2 );

	//Process:Kiem tra so nguyen to tu n1 den n2
	int dem = 0;
	for (int i = n1; i <= n2; i++)
	{
		int soNT = 1;
		if (i < 2)
		{
			soNT = 0;
		}
		else
		{
			for (int j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					soNT = 0;
					break;
				}
			}
		}
		if (soNT == 1)
		{
			dem++;
		}
	}

	//Output: Xuat ra cac so nguyen to tu n1 den n2
	cout << "So nguyen to tu " << n1 << " den " << n2 << " la: " << dem << endl;
	return 0;
}