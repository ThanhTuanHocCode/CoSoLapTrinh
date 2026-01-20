/*Viet chuong trinh nhap vao mot mang so nguyen (toi da 100 phan tu) va vi tri cua
phan tu can xoa, xoa phan tu tai vi tri da nhap va in ra mang sau khi xoa.*/

#include<iostream>
using namespace std;
int main()
{
	const int MAX_SIZE = 100;
	int a[MAX_SIZE];
	int n;
	int vt;
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0 || n > MAX_SIZE)
		{
			cout << "Nhap sai so luong phan tu" << endl;
		}
	} while (n <= 0 || n > MAX_SIZE);

	cout << "Nhap " << n << " phan tu so nguyen: ";
	for(int i=0;i<n;i++)
	{ 
		cin >> a[i];
	}
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
	}
	cout << "So phan tu cua mang sau khi xoa la ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}