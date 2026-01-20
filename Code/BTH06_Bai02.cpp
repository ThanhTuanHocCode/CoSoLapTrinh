/*Viet cac ham sau day va chuong trinh kiem tra cac ham da viet:
a. Ham tim so lon nhat giua 2 so nguyen.
b. Ham tim so lon nhat giua 3 so nguyen.*/

#include<iostream>
using namespace std;

//Process: Tao ham so lon nhat giua 2 so
int max2N(int a, int b)
{
	if(a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

//Process: Tao ham so lon nhat giua 3 so
int max3N(int a, int b, int c)
{
	int max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	return max;
}


int main()
{
	//Input: Nhap 2 so nguyen
	int a, b;
	cout << "Nhap 2 so nguyen " << endl;
	cin >> a >> b;
	//Output: In ra so lon nhat giua 2 so
	cout << "So lon nhat giua 2 so nguyen la " << max2N(a, b) << endl;

	//Input: Nhap 3 so nguyen
	int x, y, z;
	cout << "Nhap 3 so nguyen " << endl;
	cin >> x >> y >> z;
    //Output: In ra so lon nhat giua 3 so
	cout << "So be nhat giua 3 so nguyen la " << max3N(x,y,z) << endl;

	return 0;
}