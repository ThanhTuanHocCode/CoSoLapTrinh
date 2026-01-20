/*Viet chuong trinh nhan vao 1 so nguyen duong n. Xuat ra man hinh so dao
nguoc cua n. Vi du n la 352 thi so dao nguoc cua no la 253.*/
#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap n
	int n;
	do
	{
		cout << "Nhap n" << endl;
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai! Nhap lai!" << endl;
	} while (n <= 0);
	//Process: So dao nguoc
	int t=n, soDaoNguoc = 0, sd;

	while (t > 0)//352
	{
		sd = t % 10;//2
		soDaoNguoc = soDaoNguoc * 10 + sd;//2
		t = t / 10;//35
	}
	//Output: Xuat ra so dao nguoc
	cout << "So dao nguoc cua " << n << " la " << soDaoNguoc << endl;

	return 0;

}