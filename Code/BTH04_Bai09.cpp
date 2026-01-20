/*Viet chuong trinh nhan vao 2 so nguyen duong n1 va n2 (n1 < n2). Dem va xuat
ra man hinh ket qua co bao nhieu so la uoc cua 10 trong pham vi tu n1 den n2.*/

#include<iostream>
using namespace std;
int main()
{
	//Input: Nhap 2 so nguyen
	int n1, n2;
	int dem = 0;

	do
	{
	cout << "Nhap 2 so nguyen n1 va n2: " << endl;
	cin >> n1 >> n2;
	if (n1 <= 0 || n2 <= 0 ||n1>=n2)
	{
		cout << "Nhap sai! Nhap lai " << endl;
	}
    } while (n1 <= 0 || n2 <= 0||n1>=n2);

	//Process:dem bao nhieu so la uoc cua 10
	int i = n1;
	while(i<=n2)
	{
		if (i % 10 == 0)
		{
			dem++;
		}
		i++;
	}
	//output: xuat ra ket qua
	cout << "Co " << dem << " so la uoc cua 10 trong tu " << n1 << " den " << n2;


	return 0;
}