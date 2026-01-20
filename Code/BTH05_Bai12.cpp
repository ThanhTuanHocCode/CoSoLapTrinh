/*12.Viet chuong trinh nhan vao chieu cao h cua mot hinh tam giac (h > 0). Xuat ra man hinh tam giac co chieu cao h duoi dang cac dau *.
a. Tam giac voi h = 5:
*
**
* *
*  *
*****
b. Tam giac voi h = 4
*
**
***
****
c. Tam giac voi h = 4
****
***
**
*
d. Tam giac voi h = 4
****
 ***
  **
   *
e. Tam giac voi h = 4
   *
  * *
 * * *
* * * *   .*/

#include<iostream>
using namespace std;
int main()
{
	char c;
	int h;
	char chon;
	do
	{
		//Tao menu chon cau 
		system("cls");
		cout << "====MENU====" << endl
			<< "1.Hinh cau a" << endl
			<< "2.Hinh cau b" << endl
			<< "3.Hinh cau c" << endl
			<< "4.Hinh cau d" << endl
			<< "5.Hinh cau e" << endl
			<< ">>Lua chon: " << endl;
		cin >> c;

		//Nhap chieu cao
		if (c == '1' || c == '2' || c == '3' || c == '4' || c == '5')
		{
			cout << "Nhap chieu cao tam giac" << endl;
			cin >> h;
		}
		switch (c)
		{
		case '1':
		{
			for (int i = 1; i <= h; i++)
			{
				for (int j = 1; j <= h; j++)
				{
					if (i == j || i == h || j == 1)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << endl;
			}
			break;
		}
		case '2':
		{
			for (int i = 1; i <= h; i++)
			{
				for (int j = 1; j <= h; j++)
				{
					if (i >= j)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << endl;
			}
			break;
		}
		case '3':
		{
			for (int i = h; i > 0; i--)
			{
				for (int j = 1; j <= i; j++)
				{
					cout << "*";
				}

				cout << endl;
			}

			break;
		}
		case '4':
		{
			for (int i = 1; i <= h; i++)
			{
				for (int j = 1; j <= h; j++)
				{
					if (i == 1 || j == h || i <= j)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << endl;
			}
			break;
		}
		case'5':
		{
			for (int i = 1; i <= h; i++)
			{
				for (int j = 1; j <= h - i; j++)
				{
					cout << " ";
				}
				for (int j = 1; j <= i; j++)
				{
					cout << "* ";
				}
				cout << endl;
			}
		}
		default:
		{
			cout << "So do khong co trong menu " << endl;
		}
		}

		//Lua chon tiep tuc nua hay khong
		cout << "Ban co muon tiep tuc khong (y/n)" << endl;
		cin >> chon;
		if (chon != 'y' && chon != 'Y')
		{
			cout << "Cam on da su dung " << endl;
		}
		system("pause");

	}while (chon == 'y' || chon == 'Y');


	return 0;
}