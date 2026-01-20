//Viet chuong trinh nhan vao so nguyen n. Xuat ra man hinh ket qua tri tuyet doi cua so nguyen do
#include <iostream>
using namespace std;
int main()
{
	//I: Nhap so nguyen n
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	//P: Gia tri tuyet doi
	//O: In ra man hinh
	if (n > 0)
		cout << "| " << n << " | " << " la " << n << endl;
	else
	{
		cout << "| " << n << " | " << "la " << -n << endl;
	}
	return 0;
}