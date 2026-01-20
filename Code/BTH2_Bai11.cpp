/*Viet chuong trinh yeu cau nhap vao goc x theo do, sau do in ra sin,cos,tan cua x. 
Huong dan: Doi x sang radians (x ∗ π/180), dung ham toan hoc trong thu vien.*/

# include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//Input: Nhap x, pi
	double x;
	const double PI = 3.14;
	cout << "Nhap toa do x" << endl;
	cin >> x;

	double rad = x*3.14 / 180;
	cout << "sin" << x << "la" << sin(rad) << endl;
	cout << "cos" << x << "la" << cos(rad) << endl;
	cout << "tan" << x << "la" << tan(rad) << endl;
	

	return 0;

}
