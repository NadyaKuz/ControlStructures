#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int h, a, w;
	cout << "¬ведите высоту шахматной доски.\nh = ";
	cin >> h;
	cout << "¬ведите ширину шахматной доски.\nw = ";
	cin >> w;
	cout << "¬ведите величину €чейки шахматной доски.\na = ";
	cin >> a;
	for (int i = 0; i < h; i++)      //проход по высоте доски
	{
		if (i % 2 == 0)
			for (int i = 0; i < w / 2; i++)     //проход  ***---  по ширине доски
			{
				for (int i = 0; i < a; i++)
					cout << "*";
				for (int i = 0; i < a; i++)
					cout << "-";
			}
		else
			for (int i = 0; i < w / 2; i++)     //проход  ---*** по ширине доски
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