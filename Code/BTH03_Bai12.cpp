/*12.Viet chuong trinh giai va 
bien luan phuong trinh bac nhat: ax + b = 0.*/

#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap a va b
	int a, b;
	cout << "Nhap a va b: " << endl;
	cin >> a >> b;

	//Process: Bien luan phuong trinh va xuat ra ket qua
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "Vo so nghiem" << endl;
		}
		else
		{
			cout << "Vo nghiem " << endl;
		}
	}
	else
	{
		cout << "x= " << -b / a << endl;
	}
	return 0;
}