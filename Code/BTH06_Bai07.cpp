/*Viet ham kiem tra 1 so nguyen n co phai la so nguyen to hay khong? Ham se tra ve
true neu n la so nguyen to, tra ve false neu n khong la so nguyen to. Viet chuong trinh
kiem tra ham da viet.*/

#include<iostream>
using namespace std;
//Process: Kiem tra so nguyen to
bool soNguyenTo(int n)
{
	if(n==1)
	{
		return false;
	}
	for (int i = 2; i <= n; i++)
	{
		if (n%i == 0)
		{
			return false;
		}
		return true;
	}
}



int main()
{
	//Input: Nhap so nguyen
	int n;
	do
	{
		cout << "Nhap so nguyen " << endl;
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai! Nhap lai" << endl;
		}
	} while (n <= 0);
	//Ouput: In so nguyen to
	if (soNguyenTo(n) == false)
	{
		cout << n << " khong la so nguyen to " << endl;
	}
	else
	{
		cout << n << " la so nguyen to " << endl;
	}
	return 0;
}