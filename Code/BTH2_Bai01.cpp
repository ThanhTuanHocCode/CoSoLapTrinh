/*
Bai 1: Viet chuong trinh yeu cau nhap vao canh hinh vuong,
sau do tinh va in ra dien tich hinh vuong.
*/
#include <iostream>
using namespace std;
int main()
{
	//Input: Nhap canh hinh vuong n
	int n;
	cout << "Nhap canh hinh vuong: \n";
	cin >> n;

	//Process: Tinh dien tich: n*n
	int dt = n*n;


	//Output: Dien tich hinh vuong
	cout << "Dien tich:" << dt << endl;

	
	return 0;
}
