#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int h, a, w;
	cout << "������� ������ ��������� �����.\nh = ";
	cin >> h;
	cout << "������� ������ ��������� �����.\nw = ";
	cin >> w;
	cout << "������� �������� ������ ��������� �����.\na = ";
	cin >> a;
	for (int i = 0; i < h; i++)      //������ �� ������ �����
	{
		if (i % 2 == 0)
			for (int i = 0; i < w / 2; i++)     //������  ***---  �� ������ �����
			{
				for (int i = 0; i < a; i++)
					cout << "*";
				for (int i = 0; i < a; i++)
					cout << "-";
			}
		else
			for (int i = 0; i < w / 2; i++)     //������  ---*** �� ������ �����
			{
				for (int i = 0; i < a; i++)
					cout << "-";
				for (int i = 0; i < a; i++)
					cout << "*";
			}
		cout << "\n";
	}
	cout << "\n\n";
}