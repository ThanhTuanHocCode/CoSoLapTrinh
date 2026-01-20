/*
BAi8: Mot cua hang ban do go tinh gia ban cua moi mat hang bang gia mua vao cong them 60%.
Viet chuong trinh yeu cau nhap vao gia mua cua mot mat hang,
sau do in ra gia ban cua mat hang do.*/

#include <iostream>
using namespace std;
int main()
{
	//Input: nhap so luong, gia mua
	int n;
	cout << "Nhap so luong:" << endl;
	cin >> n;

	//Process: Tinh Gia ban
	if (n < 1)
		cout << "Khong hop le:" << endl;
	else
	{

		int giaMua;
		cout << "Nhap gia mua:" << endl;
		cin >> giaMua;

		int giaBan;
		giaBan = (giaMua + 60 / 100)*n;

		//Output: Xuat gia ban
		cout << "Gia ban cua mat hang:" << giaBan << endl;
	}
	return 0;

}