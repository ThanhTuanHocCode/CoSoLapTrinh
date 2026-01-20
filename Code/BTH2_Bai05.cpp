/*
Bai 5:Viet chuong trinh yeu cau nhap vao ba canh a,b,c cua tam giac, 
tinh va in ra dien tich tam giac. Dien tich tam giac tinh theo cong thuc Heron = √ , voi a,b,c la chieu dai ba canh,
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	//Input: Nhap ba canh a,b,c cua tam giac
	double a, b, c;
	cout << "Nhap ba canh cua tam giac: " << endl;
	cin >> a >> b >> c;

	// Process: Tinh dien tich tam giac theo cong thuc Heron
	double p = (a + b + c)/2;
	double S = sqrt(p*(p - a)*(p - b)*(p - c));
	
	
	//Output:Dien tich
	cout << "Dien tich: " << setprecision(2) << fixed << S << endl;
	return 0;

}