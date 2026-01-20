/*Cho mang so nguyen co 10 phan tu. Them phan tu x vao vi tri dau danh sach*/
#include<iostream>
using namespace std;
int main()
{
	const int MAX_SIZE = 11;
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
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	cout << "Nhap x de them 1 phan tu vao dau vi tri danh sach ";
	cin >> a[0];
	for (int i = 0; i <= n; i++)
	{
		cout << a[i] << " ";
	}



	return 0;
}