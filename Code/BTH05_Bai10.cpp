/*10.Viet chuong trinh nhan vao 2 so nguyen duong n1 va n2 (n1 < n2). Dem xem tu
n1 den n2 co bao nhieu so chan? bao nhieu so le? bao nhieu so la uoc cua 10?*/

#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap 2 so nguyen n1 va n2
	int n1, n2;
	do 
	{
		cout << "Nhap 2 so nguyen: " << endl;
		cin >> n1 >> n2;
		if (n1 >= n2 || n1 <= 0 || n2 <= 0)
		{
			cout << "Nhap sai! Nhap lai" << endl;
		}
	} while (n1 >= n2 || n1 <= 0 || n2 <= 0);


	//Process:Dem so le, so chan, so la uoc cua 10 tu n1 den n2
	int soChan = 0, soLe = 0, uoc=0;
	for (int i = n1; i <= n2; i++)
	{
		if (i % 2 == 0)
		{
			soChan++;
		}
		else
		{
			soLe++;
		}
	}
	for (int i = n1; i <= n2; i++)
	{
		if (i % 10 == 0)
		{
			uoc++;
		}
	}

	//Output: In ra so luong so chan, so le, so la uoc cua 10 tu n1 den n2
	cout << "Co " << soChan << " so chan tu " << n1 << " den " << n2 << endl;
	cout << "Co " << soLe << " so le tu " << n1 << " den " << n2 << endl;
	cout << "Co " << uoc << " so la uoc cua 10 tu " << n1 << " den " << n2 << endl;
	return 0;
}