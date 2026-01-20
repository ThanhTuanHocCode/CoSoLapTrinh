/*7. Viet cac ham sau day:
a. Ham kiem tra mot ky tu co phai la ky tu in hoa hay khong?
b. Ham kiem tra mot ky tu co phai la ky tu in thuong hay khong?
c. Chuong trinh nhan vao mot chuoi (string), xuat ket qua chuoi vua nhap co bao
nhieu ky tu in hoa? bao nhieu ky tu in thuong? Luu y: su dung 2 ham da xay
dung o tren.*/

#include<iostream>
#include<string>
using namespace std;

bool kyTuHoa(char c)
{
	return c >= 'A'&&c <= 'Z';
}
bool kyTuThuong(char c)
{
	return (c >= 'a'&&c <= 'z');
}
void kiemTra(string chuoi)
{
	int demHoa = 0, demThuong = 0;
	for (int i = 0; i < chuoi.length(); i++)
	{
		if (kyTuHoa(chuoi[i]))
		{
			demHoa++;
		}
		if (kyTuThuong(chuoi[i]))
		{
			demThuong++;
		}
	}
	cout << "Co " << demHoa << " ky tu in hoa trong chuoi ky tu tren" << endl;
	cout << "Co " << demThuong << " ky tu in thuong trong chuoi ky tu tren" << endl;
}

int main()
{
	char c;
	string chuoi;
	cout << "====CAU A====" << endl;
	cout << "Nhap ky tu: ";
	cin >> c;
	if (kyTuHoa(c))
	{
		cout << c << " la ky tu in hoa" << endl;
	}
	else
	{
		cout << c << " khong la ky tu in hoa" << endl;
	}

	cout << "====CAU B====" << endl;
	cout << "Nhap ky tu: ";
	cin >> c;
	if (kyTuThuong(c))
	{
		cout << c << " la ky tu in thuong" << endl;
	}
	else
	{
		cout << c << " khong la ky tu in thuong" << endl;
	}

	cout << "====CAU C====" << endl;
	cout << "Nhap chuoi ky tu: ";
	cin >> chuoi;
	kiemTra(chuoi);

	return 0;
}