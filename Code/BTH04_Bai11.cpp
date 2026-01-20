/*11.Viet chuong trinh nhan vao 1 so o dang nhi phan. Xuat ra man hinh ket qua so do
chuyen qua he thap phan.*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	//Input: Nhap so nhi phan
	string nhiPhan;
	int i = 0;
	cout << "Nhap so nhi phan " << endl;
	getline(cin, nhiPhan);


		//Process: Kiem tra so nhi phan
		while (i < nhiPhan.length())
		{
			if (nhiPhan[i] != '0' && nhiPhan[i] != '1')
			{
				cout << "Loi! Nhap sai so nhi phan " << endl;
				return 1;
			}

			i++;
		}
	
		//Process: chuyen sang thap phan
		int tong = 0;
		i= 0;
		int doDai = nhiPhan.length();
		while (i<doDai)
		{
			if (nhiPhan[i] == '1')
			{
				tong += pow(2, doDai - 1 - i);
			}
			i++;
		}

		//Output: Xuat ra tong
		cout << "So thap phan la " << tong;


	return 0;
}
