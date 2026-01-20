/*Cho mangg toi da 10 phan tu, dem xem trong mang co bao nhieu so nguyen to */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const int MAX_SIZE = 10;
	int a[MAX_SIZE], n;
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai! Nhap lai " << endl;
		}
	} while (n <= 0);
	cout << "Nhap 10 so nguyen: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	bool snt = true;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		snt = true;
		if (a[i] <= 1)
		{
			snt = false;
		}
		
		for (int j = 2; j <= sqrt(a[i]); j++)
		{
			if (a[i] % j == 0)
			{
				snt = false;
			}
		}
		if (snt == true)
		{
			dem++;
		}
	}

	cout << "Co " << dem << " so nguyen to trong mang " << endl;
	return 0;
}