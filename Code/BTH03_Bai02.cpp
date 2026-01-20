//Viet chuong trinh tim so lon nhat cua 2 so nguyen a va b
#include <iostream>
using namespace std;
int main()
{
	//I: Nhap so nguyen a b
	int a, b;
	cout << "Nhap so nguyen a va b: ";
	cin >> a >> b;
	//P: Tim so lon nhat giua a va b
	cout << (a > b ? "a > b" : "b >= a") << endl;
	return 0;
}