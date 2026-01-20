/*10.Viet chuong trinh nhan vao 1 so nguyen n > 0. Xuat ra man hinh cac gia tri thua
so nguyen to cua n. Vi du n = 126 thi cac thua so nguyen to la 2, 3, 3, 7.*/

#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap 1 so nguyen
	int n;
	do
	{
		cout << "Nhap so nguyen n: " << endl;
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai! Nhap lai " << endl;
		}
	} while (n <= 0);

	//Process va Output: Kiem tra cac luy thua nguyen to va xuat ra ket qua
	int i=3;
	cout << "Cac luy thua so nguyen cua " << n << " la ";
	while (n % 2 == 0)
	{
		cout << 2 << " ";
		n /= 2;
	}
	

		while (i*i<= n)
		{
			
			while (n%i == 0)
			{
				cout << i << " ";
				n /= i;
			}
			i += 2;
		}
		
		if (n > 2)
		{
			cout << n << " ";
		}
	

	return 0;
}