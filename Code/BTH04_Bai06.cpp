/*Viet chuong trinh nhan vao 1 so nguyen n. Xuat ra man hinh thong bao n co phai
la so nguyen to hay khong? Biet rang so nguyen to la so tu 2 tro len, chi chia het
cho 1 va cho chinh ban than no.*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//Input: Nhap so nguyen
	int n;
	do
	{
		cout << "Nhap n" << endl;
		cin >> n;
		if (n <= 1)
			cout << "Nhap sai! Nhap lai!" << endl;
	} while (n <= 1);
	//Kiem tra so nguyen to
	int demSNT=0, i = 2, j = 2;
	while (i <= sqrt(n))
	{
		bool snt = true;
		while (j <= sqrt(i))
		{
			if (i%j == 0)
			{
				snt = false;
				break;
			}
			demSNT += snt;
		}
		//Output: Xuat ra man hinh
		if (snt == true)
		{
			cout << n << " la so nguyen to" << endl; break;
		}
	
		else
		{
			cout << n << " khong phai la so nguyen to" << endl;
			break;
		}
	}

	return 0;
}