/*4. Viet cac ham sau day:
a. Ham kiem tra mot ky tu co phai la ky tu so hay khong?
b. Ham kiem tra mot ky tu co phai la ky tu chu cai hay khong?
c. Chuong trinh nhan vao mot chuoi (string), xuat ket qua chuoi vua nhap co bao
nhieu ky tu so? bao nhieu ky tu chu? Luu y: su dung 2 ham da xay dung o tren.*/

#include<iostream>
#include<string>
using namespace std;

bool kyTuSo(char c)
{
	return c >= '1'&&c <= '9';
}
bool kyTuChu(char c)
{
	return (c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z');
}
void kiemTra(string chuoi)
{
	int demSo = 0, demChu = 0;
	for (int i = 0; i < chuoi.length(); i++)
	{
		if (kyTuSo(chuoi[i]))
		{
			demSo++;
		}
		if (kyTuChu(chuoi[i]))
		{
			demChu++;
		}
	}
	cout << "Co " << demSo << " ky tu so trong chuoi ky tu tren" << endl;
	cout << "Co " << demChu << " ky tu chu trong chuoi ky tu tren" << endl;
}

int main()
{
	char c;
	string chuoi;
	cout << "====CAU A====" << endl;
	cout << "Nhap ky tu: ";
	cin >> c;
	if (kyTuSo(c))
	{
		cout << c << " la ky tu so" << endl;
	}
	else
	{
		cout << c << " khong la ky tu so" << endl;
	}

	cout << "====CAU B====" << endl;
	cout << "Nhap ky tu: ";
	cin >> c;
	if (kyTuChu(c))
	{
		cout << c << " la ky tu chu" << endl;
	}
	else
	{
		cout << c << " khong la ky tu chu" << endl;
	}

	cout << "====CAU C====" << endl;
	cout << "Nhap chuoi ky tu: ";
	cin >> chuoi;
	kiemTra(chuoi);

	return 0;
}