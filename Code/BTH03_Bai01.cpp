//Viet chuong trinh nhan vao diem trung binh 1 mon hoc cua mot sinh vien. Xuat ra man hinh thong bao cho biet sinh vien nay dau hay rot? Biet rang neu diem trung binh tu 5 tro len la dau, nguoc lai la rot
#include <iostream>
using namespace std;
int main()
{
	//Input: Nhap diem trb
	int n; 
	cout << "Nhap diem trung binh: ";
	cin >> n;
	//Process: 5 tro len la dau, nguoc lai la rot
	//Output: In ra man hinh
	if (n >= 5)
		cout << " Dau " << endl;
	else
	{
		cout << " Rot " << endl;
	}
	return 0;
}