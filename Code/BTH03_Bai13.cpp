/*13.Viet chuong trinh giai va bien luan phuong trinh bac hai:
ax2 + bx + c = 0.*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//Input: Nhap a, b, c
	int a, b, c;
	cout << "Nhap a va b va c" << endl;
	cin >> a >> b >> c;

	//Proccess: Bien luan phuong trinh 
	//Output: xuat ket qua
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				cout << "Phuong trinh vo so nghiem" << endl;
			}
			else
			{
				cout << "Phuong trinh vo nghiem" << endl;
			}
		}
		else
		{
			cout << "x= " << -c / b << endl;
		}
	}
	else
	{
		int delta = b*b - 4 * a*c;
		if (delta > 0)
		{
			cout << "x1= " << (-b + sqrt(delta)) / (2 * a) << endl;
			cout << "x2= " << (-b - sqrt(delta)) / (2 * a) << endl;
		}
		else if (delta == 0)
		{
			cout << "x= " << -b / (2 * a) << endl;
		}
		else
		{
			cout << "Phuong trinh vo nghiem " << endl;
		}
	}



	return 0;
}