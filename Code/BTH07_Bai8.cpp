/*Chuoi so Fibonacci bat dau tu 0 va 1, so ke tiep la tong cua hai so truoc do.
0, 1, 1, 2, 3, 5, 8, 13, 21, ...*/

#include<iostream>
using namespace std;

int fibonacci(int n)
{
	int a = 0, b = 1;
	int tong;
	if (n == 0)
	{
		return a;
	}
	if (n == 1)
	{
		return b;
	}
	for (int i = 2; i <=n; i++)
	{
		tong = a + b;
		a = b;
		b = tong;
	}
	return tong;
}



int main()
{
	int n;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 0)
		{
			cout << "Chuoi so Fibonacci lan thu " << n << " khong hop le" << endl;
		}
	} while (n < 0);
	cout << "Chuoi so Fibonacci lan thu " << n << " la " << fibonacci(n) << endl;


	return 0;
}