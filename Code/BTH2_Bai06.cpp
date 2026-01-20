/*Bai6: Viet chuong trinh yeu cau nhap vao mot so nguyen duong gom 3 chu so, 
sau do in ra tong cua 3 chu so va so dao nguoc. Vi du: Nhap 1 so co 3 chu so: 123 
Tong 3 chu so la: 6 
So dao nguoc la: 321 
Huong dan: Dung toan tu / va % de tach tung chu so.*/

# include <iostream>
using namespace std;
int main()
{
	//Input: Nhap so co 3 chu so
	int n;
	cout << "Nhap 1 so co 3 chu so:" << endl;
	cin >> n;
	//Process: Tinh tong 3 chu so, so dao nguoc
	if (n < 100 || n>999)
		cout << "So khong hop le:" << endl;
	else
	{
		int t = n; // 123
		int sd;
		int soDaoNguoc = 0, tong = 0;

		sd = t % 10; // 3
		tong += sd; // 3
		soDaoNguoc = soDaoNguoc * 10 + sd;// 3

		sd = t / 10; //12
		sd = sd % 10; //2
		tong += sd; // 5
		soDaoNguoc = soDaoNguoc * 10 + sd; // 32

		sd = t / 10; //12
		sd = sd / 10; //1 
		tong += sd; // 6
		soDaoNguoc = soDaoNguoc * 10 + sd; //321

	//output: tong, so dao nguoc
		cout << "Tong: " << tong << endl;
		cout << "So dao nguoc: " << soDaoNguoc << endl;
	}
			

		
	
		


		



	
	

	return 0;

}