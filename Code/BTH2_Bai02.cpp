/*
Bai 2: Viet chuong trinh yeu cau nhap vao hai canh hinh chu nhat, 
sau do tinh va in ra dien tich hinh chu nhat.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//Input: Nhap canh hinh chu nhat cd, cr
	double cd, cr;
	cout << "Nhap chieu dai va chieu rong: \n";
	cin >> cd >> cr;

	//Process: Tinh dien tich: dt =cd*cr
	double dt = cd * cr;


	//Output: Dien tich
	cout << "Dien tich: " << setprecision(2) << fixed << cd * cr << endl;


	return 0;
 }
