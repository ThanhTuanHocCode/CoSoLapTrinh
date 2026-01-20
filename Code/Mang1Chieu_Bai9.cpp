/*Viet ham dem va in ra cac so nguyen to trong mang so nguyen toi da 10 phan tu */

#include<iostream>
using namespace std;

const int MAX_SIZE = 10;
int a[MAX_SIZE];

void soNguyenTo(int n)
{
	int dem = 0;
	cout << "Nhap " << n << " so nguyen: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cout << "Cac so nguyen to co trong mang so nguyen la ";
	bool snt = true;
	for (int i = 0; i < n; i++)
	{
		snt = true;
		if (a[i] <= 1)
		{
			snt = false;
		}
		for (int j = 2; j <= sqrt(a[i]); j++)
		{
			if (a[i] % j == 0)
			{
				snt = false;
			}
		}
		if (snt == true)
		{
			dem++;
			cout << a[i] << " ";
		}
		
	}
	cout << endl;
	cout << "Co " << dem << " so nguyen to trong mang " << endl;

}


int main()
{
	int n;
	do {
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0)
		{
			cout << "So luong phan tu khong hop le " << endl;
		}
	} while (n <= 0);

	soNguyenTo(n);
	return 0;
}