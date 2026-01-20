/*Viet chuong trinh yeu cau: 
a) Nhap vao mot ky tu, sau do in ra ma ASCII cua ky tu do. 
b) Nhap vao mot so nguyen (1..255), sau do in ra ky tu co ma ASCII tuong ung.*/


# include <iostream>
using namespace std;
int main()
{
	// nhap 1 ky tu in ra ma ASCII
	char c;
	cout << "Nhap Ky tu:" << endl;
	cin >> c;

	cout << "Ma ASCII cua" << " "<<c << "la" <<" "<< int(c) << endl;
	 
	// Nhap 1 so nguyen  in ra ma ASCII
	int a;
	cout << "Nhap so nguyen " << endl;
	cin >> a;

	cout << "Ma ASCII "<<(a) << "la"<< char(a) << endl;


	return 0;

}