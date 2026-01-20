/*
Viet chuong trinh nhap vao mot chuoi ky tu va in ra chieu dai cua chuoi.*/

#include < iostream>
# include <string>
using namespace std;
int main()
{
	//Input: Nhap chuoi
	string s;
	cout << "Nhap 1 chuoi" << endl;
	//Po
	getline(cin, s);
	cout << "Do dai chuoi la " << s.length()<< endl;


	return 0;

}