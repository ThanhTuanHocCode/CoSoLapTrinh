/*7. Viet ham tra ve vi tri xuat hien dau tien cua phan tu nho nhat trong mang. Ham
nhan vao mang so nguyen va so phan tu cua mang. Viet chuong trinh kiem tra
ham.*/

#include<iostream>
using namespace std;

void nhoNhat(int a[], int n)
{
	cout << "Nhap " << n << " phan tu ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	int viTri=0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] < a[viTri])
		{
			viTri = i;
		}
	}
	cout << "Vi tri xuat hien dau tien cua phan tu nho nhat la " << viTri+1 << endl;
}
int main()
{
	const int MAX_SIZE = 100;
	int a[MAX_SIZE];
	int n;
	int vt;
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0 || n > MAX_SIZE)
		{
			cout << "Nhap sai so luong phan tu" << endl;
		}
	} while (n <= 0 || n > MAX_SIZE);


	nhoNhat(a, n);

	return 0;
}