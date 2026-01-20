/*Viet chuong trinh nhan vao 1 so nguyen duong n (n > 0). Tinh va xuat tong cac
so le tu 1 den n. Vi du: n = 4 thi ket qua la 4.*/

#include <iostream>
using namespace std;
int main()

{
	//Input: Nhap so nguyen duong n
	int n, tongLe = 0;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai nhap lai\n";
	} while (n <= 0);

	//Process: Tinh tong cac so nguyen duong tu 1 den n
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		else
		{
			tongLe += i;
		}

	}

	//Output: In ra tong cac so nguyen duong tu 1 den n
	cout << "Tong cac so le tu 1 den " << n << " la: " << tongLe << endl;
	return 0;
}