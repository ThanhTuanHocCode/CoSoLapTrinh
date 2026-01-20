/*10.Viet ham kiem tra mot so nguyen n co phai la so hoan thien hay khong? Viet chuong
trinh kiem tra ham vua viet. Biet rang so hoan thien la so co tong cac uoc so (ke ca 1)
bang chinh no. Vi du: 6 la so hoan thien vi 6 = 1 + 2 + 3 (1, 2, 3 la cac uoc cua 6).*/

#include<iostream>
using namespace std;

//Process: Tao ham va kiem tra so hoan thien
int soHoanThien(int n)
{
	int sum = 0;
	
	for (int i = 1; i <= n / 2; i++)
	{
		if (n%i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	//Input: Nhap so nguyen n
	//Output: in ra ket qua
	int n;
	do
	{
		cout << "Nhap so nguyen n " << endl;
		cin >> n;
		if (n<=0)
		{
			cout << "Nhap sai! Nhap lai " << endl;
		}
		else
		{
			if (soHoanThien(n) == true)
			{
				cout << n << " la so hoan thien" <<endl;
			}
			else
			{
				cout << n << " khong phai la so hoan thien " <<endl;
			}
		}
	} while (n<=0);
	return 0;
}