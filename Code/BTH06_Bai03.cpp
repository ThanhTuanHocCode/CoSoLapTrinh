/*Viet ham tinh x^y
(x la so thuc, y la so nguyen) va chuong trinh kiem tra ham.*/

#include<iostream>
using namespace std;
//Process: Tao ham luy thua
double luyThua(double x, int y)
{
	double luyThua=1;
	if (y >= 0)
	{
		for (int i = 1; i <= y; i++)
		{
			luyThua *= x;
		}
		return luyThua;
	}
	else 
	{
		y = -y;
		for (int i = 1; i <= y; i++)
		{
			luyThua *= 1.0 / x;
		}
		return luyThua;
	}

}

int main()
{
	//Input: Nhap so thua x va so nguyen y
	double x;
	int y;
	cout << "Nhap x va y " << endl;
	cin >> x >> y;

	//Output: In ra luy thua
	cout << "Luy thua cua " << x << " mu " << y << " la " << luyThua(x, y);
	return 0;
}