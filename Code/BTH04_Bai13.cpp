/*13.Viet chuong trinh nhan vao mot day so nguyen lien tuc va ket thuc bang to hop
phim Ctrl + Z. Sau do xuat ra man hinh gia tri so lon nhat, so nho nhat va tong
cua cac so vua nhap.*/

#include<iostream>
using namespace std;
int main()
{
	int n, soLuongNhap=0, tong = 0;
	int max, min;
	cout << "Nhap day so nguyen (Ctrl+Z de ket thuc): ";

	if (cin >> n)
	{
		max = n;
		min = n;
	}
	while (cin >> n)
	{
		tong += n;
		
		if (n > max)
		{
			max = n;
		}
		if (n < min)
		{
			min = n;
		}
		soLuongNhap++;
	}

	if (soLuongNhap == 0)
	{
		cout << "Khong co so de tinh toan " << endl;
	}
	else
	{
		cout << "Gia tri lon nhat la: " << max << endl;
		cout << "Gia tri nho nhat la " << min << endl;
		cout << "Tong cac so la: " << tong;
	}
	return 0;
}