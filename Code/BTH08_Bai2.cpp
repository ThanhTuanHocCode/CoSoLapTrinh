/*2. Viet chuong trinh thuc hien cac cong viec sau day:
a) Dinh nghia hang MAXSIZE la 100.
b) Khai bao mang values co the luu so phan tu toi da la MAXSIZE, kieu cua moi
phan tu la double.
c) Khai bao currentSize luu so phan tu hien co trong mang.
d) Nhap vao gia tri cua currentSize.
e) Nhap vao cac gia tri trong mang values, so phan tu doc vao la currentSize.
f) In cac phan tu trong mang values tren mot dong, cach nhau boi dau phay.*/

#include<iostream>
using namespace std;
int main()
{
	const int MAX_SIZE = 100;
	double values[MAX_SIZE];
	int currentSize;
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> currentSize;
		if (currentSize <= 0 || currentSize > MAX_SIZE)
		{
			cout << "So luong phan tu khong hop le " << endl;
		}
	} while (currentSize <= 0 || currentSize > MAX_SIZE);

	cout << "Nhap " << currentSize << " phan tu: ";
	for (int i = 0; i < currentSize; i++)
	{
		cin >> values[i];
	}
	cout << "Cac phan tu trong mang values la: ";
	for (int i = 0; i < currentSize; i++)
	{
		
		cout << values[i];
		if (values[i] != values[currentSize-1])
		{
			cout << ",";
		}
	}
	cout << endl;
	return 0;
}