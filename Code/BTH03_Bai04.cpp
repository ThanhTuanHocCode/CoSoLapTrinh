//Viet chuong trinh nhan vao 2 so nguyen. Xuat ra man hinh ket qua so sanh giua hai so (so thu nhat lon hon, nho hon hay hai so bang nhau)
#include <iostream>
using namespace std;
int main()
{
	//I: Nhap vao 2 so nguyen
	int a, b;
	cout << "Nhap vao 2 so nguyen: ";
	cin >> a >> b;
	//p: So sanh giua 2 so
	//O: in ra man hinh ket qua
	if (a > b)
		cout << "So thu nhat lon hon " << endl;
	else if(a == b)
		cout << "Hai so bang nhau" << endl;
	else
	{
		cout << "So thu nhat nho hon" << endl;
	}
	return 0;
}