/*Viet ham tinh so dao nguoc cua mot so nguyen duong n. Viet chuong trinh kiem tra
ham da viet.*/

#include<iostream>
using namespace std;

//Process: Tao ham so dao nguoc
int soDaoNguoc(int n)
{
	int sd, sdn = 0;
	if (n <= 0)
	{
		return 1;
	}
	else
	{
		while (n > 0)
		{
			sd = n % 10;
			sdn = sdn * 10 + sd;
			n = n / 10;
		}
		return sdn;
	}
}
int main()
{
	//Input: Nhap so nguyen duong n
	//Output: In ra so dao nguoc cua n
	int n;
	do
	{
		cout << "Nhap so nguyen duong " << endl;
		cin >> n;
		if(soDaoNguoc(n)==1)
		{ 
			cout << "Nhap sai! Nhap lai " << endl;
		}
		else
		{
			cout << "So dao nguoc cua " << n << " la " << soDaoNguoc(n);
		}
	} while (soDaoNguoc(n) == 1);
	return 0;
}