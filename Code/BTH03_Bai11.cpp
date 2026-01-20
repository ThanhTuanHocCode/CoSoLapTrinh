/*11.Viet chuong trinh nhan vao 1 so nguyen. Xuat ra man hinh so nguyen do la so
am? So duong hay so 0 ?*/

#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap so nguyen n
	int n;
	cout << "Nhap so nguyen n " << endl;
	cin >> n;
	//Process va Output: Kiem tra so nguyen la so am hay duong hay 0 va xuat ra man hinh
	if (n > 0)
	{
		cout << n << " la so duong";
	}
	else if (n == 0)
	{
		cout << n << " la so 0";
	}
	else
	{
		cout << n << " la so am";
	}
	return 0;
}