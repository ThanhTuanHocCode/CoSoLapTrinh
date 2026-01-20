/*11.Viet ham kiem tra mot so nguyen n co phai la so doi xung (Palindrome) hay khong?
Viet chuong trinh kiem tra ham vua viet. Biet rang so doi xung la so co so dao nguoc
cua no bang chinh no.*/

#include<iostream>
using namespace std;

//Process:Tao ham so doi xung va kiem tra
int soDoiXung(int n)
{
	int sdn = 0, sd;
	int i = n;
	while (n > 0)
	{
		sd = n % 10;
		sdn = sdn * 10 + sd;
		n = n / 10;
	}
	if (sdn == i)
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
	//Output: In ra ket qua
	int n;
	do
	{
		cout << "Nhap so nguyen n " << endl;
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai! Nhap lai" << endl;
		}
		else
		{
			if (soDoiXung(n) == true)
			{
				cout << n << " la so dao nguoc " << endl;
			}
			else
			{
				cout << n << " khong phai la so dao nguoc " << endl;
			}
		}
	} while (n <= 0);
	return 0;
}