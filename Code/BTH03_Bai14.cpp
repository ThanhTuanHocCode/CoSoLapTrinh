/*14.Viet chuong trinh nhan vao 3 so nguyen. Xuat ra man hinh 3 so do duoc sap xep
tang dan.*/

#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap vao 3 so nguyen a b c
	int a, b, c;
	cout << "Nhap 3 so nguyen " << endl;
	cin >> a >> b >> c;
	//Process: Kiem tra so lon nhat va be nhat trong 3 so
	int max = a, min = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	if (min > b)
	{
		min = b;
	}
	if (min > c)
	{
		min = c;
	}
	//Tinh so nam giua
	int t = (a + b + c) - max - min;
	//Output: sap xep theo thu tu tang dan
	cout << min << " < " << t << " < " << max;
	return 0;
}