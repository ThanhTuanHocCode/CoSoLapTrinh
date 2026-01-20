/*Viet ham dem so luong va in ra cac so chan co trong mang so nguyen toi da 10 phan tu*/

#include<iostream>
using namespace std;
const int MAX_SIZE = 10;
int a[MAX_SIZE];
int dem(int a[],int n)
{
	int dem=0;
	cout << "Nhap " << n << " so nguyen: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			dem++;
		}
	}
	return dem;
}


int main()
{
	int n;
	do
	{
		cout << "Nhap so luong phan tu trong mang: ";
		cin >> n;
		if (n <= 0)
		{
			cout << "So luong phan tu khong hop le " << endl;
		}
	} while (n <= 0);
	cout << "Cac so chan co trong mang so nguyen la " << dem(a,n) << endl;
	return 0;
}