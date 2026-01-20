/*Viet ham xoa phan tu x vao vi tri bat ki trong mang so nguyen toi da 10 phan tu */

#include<iostream>
using namespace std;
const int MAX_SIZE = 11;
int a[MAX_SIZE];

void xoa(int n)
{
	cout << "Nhap " << n << " phan tu so nguyen: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int vt, so;
	cout << "Nhap vi tri can xoa: ";
	cin >> vt;
	if (vt <= 0 || vt > n)
	{
		cout << "Vi tri can xoa khong hop le " << endl;
		
	}
	else  
	{
		for (int i = vt - 1; i < n - 1; i++)
		{
			a[i] = a[i + 1];
		}
		n--;
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}
}
int main()
{
	int n;
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0)
		{
			cout << "So luong phan tu khong hop le " << endl;
		}
	} while (n <= 0);
	xoa(n);
	return 0;
}
