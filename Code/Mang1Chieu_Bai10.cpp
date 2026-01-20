/*Viet ham them phan tu x vao vi tri bat ki trong mang so nguyen toi da 10 phan tu */

#include<iostream>
using namespace std;
const int MAX_SIZE = 11;
int a[MAX_SIZE];

void them(int n)
{
	cout << "Nhap " << n << " phan tu so nguyen: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int vt, so;
	int x;
	cout << "Nhap so vao vi tri them vao ";
	cin >> x;
	cout << "Nhap vi tri them vao: ";
	cin >> vt;
	if (vt <= 0 || vt > n + 1)
	{
		cout << "Vi tri can them khong hop le " << endl;
	}
	else
	{
		for (int i = n; i > vt - 1; i--)
		{
			a[i] = a[i - 1];
		}
		a[vt - 1] = x;
		n++;
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}

}

int main()
{
	int n;
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0)
		{
			cout << "So luong phan tu khong hop le " << endl;
		}
	} while (n <= 0);
	them(n);




	return 0;
}