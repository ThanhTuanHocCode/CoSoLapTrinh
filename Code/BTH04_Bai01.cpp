/*Viet chuong trinh nhan vao 1 so nguyen n ( n > 0 ). Tinh va xuat ra man hinh ket
qua tong cac so tu 1 den n.
*/
#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap n>0
	int n;
	do
	{
		cout << "Nhap n" << endl;
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai! Nhap lai!" << endl;

	} while (n<=0);
	//Process: Tinh tong
	int i = 1, tong = 0;

	while(i<=n)
	{
		tong += i;
		i++;
	}
	//Output: Xuat tong
	cout << "Tong cac so tu 1 den" << " " << n << " la " << tong << endl;
	return 0;

}