/*
Thuat giai sau day mo ta cach tinh tong tri gia mot don hang cua mot cua hang ban sach,
dua tren tong so tien mua sach va tong so sach mua: Doc vao tong so sach va tong so tien. 
Tinh thue (7.5% cua tong so tien). Tinh tien van chuyen (2000 d/cuon). 
Tong tri gia don hang = tong tien mua sach + tien thue + tien van chuyen. 
In ra tong tri gia cua don hang. Hay chuyen thuat giai tren thanh chuong trinh C++.*/

# include <iostream>
using namespace std;
int main()
{
	//Input: Nhap so sach, thue , tien van chuyen, tong tien
	double n; 
	cout << "Tong so sach" << endl;
	cin >> n;

	double s;
	cout << "Tong so tien" << endl;
	cin >> s;
	//Process: tinh thue, tien van chuyen
	double thue;
	thue = 7.5 / 100 * s;
	
	double tienVanChuyen;
	tienVanChuyen = 2000 * n;
	//Outout: xaut ra tong gia tri don hang
	double tongDonHang;
	tongDonHang = s + tienVanChuyen + thue;
	cout << "Tong gia tri don hang" << tongDonHang << endl;

	return 0;

}