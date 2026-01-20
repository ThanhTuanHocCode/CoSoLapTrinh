/*
Bai 4: Viet chuong trinh yeu cau nhap vao ban kinh r, tinh va in ra dien tich (πr2) va chu 
vi cua hinh tron (2πr). Dinh nghia hang so PI de luu gia tri π   3.141593. 
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Input: Nhap ban kinh r
	double r;
	const double PI = 3.141593;
	cout << "Nhap ban kinh: " << endl;
	cin >> r;

	//Process:Tinh dien tich: PI * r * 2;
	double S = PI * r * 2;


	//Output: Dientich
	cout << "Dien tich: " << setprecision(2) << fixed << S << endl;
	return 0;

}
