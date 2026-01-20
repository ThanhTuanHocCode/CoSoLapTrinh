/*Viet ham xoa cac phan tu trung nhau trong mang.*/

#include<iostream>
using namespace std;

const int MAX_SIZE = 100;
int a[MAX_SIZE];
void xoa(int a[], int n)
{
	cout << "Nhap " << n << " phan tu: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j]) 
			{
				for (int k = j; k < n - 1; k++)
				{
					a[k] = a[k + 1];
				}
				n--; 
				j--;  
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
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
			cout << "So luong khong hop le " << endl;
		}
	} while (n <= 0);
	xoa(a, n);
}