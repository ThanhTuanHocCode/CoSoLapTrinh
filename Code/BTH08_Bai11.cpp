/*11. Viet ham sap xep cac phan tu trong mang tang dan.*/

#include<iostream>
using namespace std;

const int MAX_SIZE = 100;
int a[MAX_SIZE];
void sapXep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++) 
		{
			if (a[j] > a[j + 1]) 
			{
				int sapXep = a[j];
				a[j] = a[j + 1];
				a[j + 1] = sapXep;
			}
		}
	}
	cout << "Sap xep cac phan tu trong mang tang dan la ";
	for (int j = 0; j < n; j++)
	{
		cout << a[j] << " ";
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
	cout << "Nhap " << n << " phan tu: ";
	for (int j = 0; j < n; j++)
	{
		cin >> a[j];
	}
	sapXep(a, n);
}