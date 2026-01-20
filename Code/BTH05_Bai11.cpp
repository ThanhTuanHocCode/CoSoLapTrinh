/*11.Viet chuong trinh nhan vao 1 so nguyen duong c la chieu dai canh cua hinh
vuong ( c > 0 ). Xuat ra hinh vuong duoi dang cac dau *.
a. Hinh vuong voi n = 4

****
****
****
****

b. Hinh vuong voi n = 4

****
*  *
*  *
****     .*/

#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap so nguyen duong
	int c;
	do
	{
		cout << "Nhap so nguyen duong " << endl;
		cin >> c;
		if (c <= 0)
		{
			cout << "Nhap sai! Nhap lai (c > 0)" << endl;
		}
	} while (c <= 0);

	//Process va output:Tao hinh vuong 
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	//Process va output: Tao hinh vuong co khoang trong
	for (int i = 1; i <= c; i++)
	{
		for (int j=1; j <= c; j++)
		{
			if (i == 1 || i == c || j == 1 || j == c)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}






	return 0;
}