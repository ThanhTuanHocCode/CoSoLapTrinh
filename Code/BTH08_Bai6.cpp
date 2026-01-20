/*6. Viet chuong trinh gom cac ham sau day:
a) Nhap mot day so nguyen vao mang arr, so phan tu nhap vao la arrSize:
void nhap(int arr[], int arrSize);

b) In day so nguyen trong arr, cach nhau boi dau phay, arrSize la so phan tu cua
day:
void xuat(const int arr[], int arrSize);
c) Tim mot gia tri x trong mang arr, tra ve true tim thay, nguoc lai tra ve false,
arrSize la so phan tu cua mang:
bool tim(const int arr[], int arrSize, int x);
d) Dao nguoc cac phan tu trong mang arr, arrSize la so phan tu cua mang:
void daonguoc(int arr[], int arrSize)
e) Xoa phan tu tai mot vi tri p trong mang arr, arrSize la so phan tu cua mang:
void xoa(int arr[], int& arrSize, int p)*/

#include<iostream>
using namespace std;


void nhap(int arr[], int arrSize)
{
	cout << "Nhap so nguyen vao mang: ";
	for (int i = 0; i < arrSize;i++)
	{
		cin>>arr[i];
	}
}
void xuat(const int arr[], int arrSize)
{
	cout << "So phan tu trong mang la ";
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i];
		if (arr[i] != arr[arrSize-1])
		{
			cout << ",";
		}
	}
	cout << endl;
}
void daoNguoc(int arr[], int arrSize)
{
	for (int i = 0; i < arrSize/2; i++)
	{
		int hoanDoi = arr[i];
		arr[i] = arr[arrSize - 1 - i];
		arr[arrSize- 1 - i] = hoanDoi;
	}
	cout << "Dao nguoc cac phan tu trong mang la ";
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void xoa(int arr[], int& arrSize, int p)
{
	if (p <= 0 || p > arrSize)
	{
		cout << "Nhap sai vi tri de xoa " << endl;
	}
	else
	{
		for (int i = p - 1; i < arrSize - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arrSize--;
		cout << "So phan tu trong mang sau khi xoa la ";
		for (int i = 0; i < arrSize; i++)
		{
			cout << arr[i] << " ";
		}
	}
	
}


int main()
{
	const int MAX_SIZE = 100;
	int arrSize;
	int arr[MAX_SIZE];
	do
	{
		cout << "Nhap so luong phan tu ";
		cin >> arrSize;
		if (arrSize <= 0)
		{
			cout << "So luong phan tu khong hop le" << endl;
		}
	} while (arrSize <= 0);
	
	nhap(arr, arrSize);
	xuat(arr, arrSize);
	daoNguoc(arr, arrSize);

	int p;
	cout << "Nhap vi tri can xoa: ";
	cin >> p;
	xoa(arr, arrSize, p);
	return 0;
}