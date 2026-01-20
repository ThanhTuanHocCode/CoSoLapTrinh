/*
Viet chuong trinh nhap vao toa do hai diem, tinh va in ra khoang cach giua hai diem.*/

# include < iostream>
#include <cmath>
using namespace std;
int main()
{
	//Input: Nhap toa do diem
	double  x1, x2, y1, y2;
	cout << "Nhap toa do diem thu nhat" << endl;
	cin >> x1 >> y1;
	cout << " nhap toa do diem thu hai:" << endl;
	cin >> x2 >> y2;
	//Process: Nhap cong thuc d
	double d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	//Output: In khoang cach hai diem
	cout << "Khoang cach giua hai diem:" << d << endl;
	
	return 0;

}