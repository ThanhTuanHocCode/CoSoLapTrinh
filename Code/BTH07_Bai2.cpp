/*Viet ham tim uoc chung lon nhat cua 2 so nguyen duong bang thuat giai Euclid.
Thuat giai Euclid:
- Nhan vao: 2 so nguyen duong m va n.
- Tra ve: uoc chung lon nhat cua m va n.
- Thuat giai:
o Buoc 1: neu n = 0 thi ket qua la m va ket thuc. Nguoc lai sang buoc 2.
o Buoc 2: tinh so du r cua phep chia m cho n.
o Buoc 3: gan n cho m, r cho n. Quay lai buoc 1.
Viet chuong trinh nhan vao 1 phan so (gom tu so va mau so), xuat ket qua rut gon
cua phan so (dung ham uoc chung lon nhat vua xay dung).*/

#include<iostream>
using namespace std;

int uocChung(int n, int m)
{
	while (n != 0)
	{
		int r = m%n;
		m = n;
		n = r;
	}
	return m;
}

void rutGon(int tu, int mau)
{
	int uocChungMax = uocChung(tu, mau);
	tu = tu / uocChungMax;
	mau = mau / uocChungMax;
	cout << "Rut gon phan so: " << tu << "/" << mau << endl;
}


int main()
{
	int n, m;
	do
	{
		cout << "Nhap 2 so nguyen: ";
		cin >> m >> n;
		if (n == 0)
		{
			cout << "Nhap sai! Nhap lai " << endl;
		}
	} while (n == 0);

	cout << "Uoc chung lon nhat cua " << m << " va " << n << " la " << uocChung(m, n) << endl;
	rutGon(m, n);

	return 0;
}