#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMBUS_1
//#define ROMBUS_2
#define SHASHKY


void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������ ������: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3

#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_4

#ifdef ROMBUS_1
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";	cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS_1

#ifdef ROMBUS_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n - i - 1) * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS_2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			//if ((i + j) % 2 == 0)cout << "+ ";else cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			//cout << ((i + j) % 2 == 0 ? "+ " : "- ");
			cout << ((i + j) % 2 ? "+ " : "- ");
		cout << endl;
	}
	true;

#ifdef SHASHKY
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)
				cout << "+ ";
			else cout << "- ";
		}
		cout << endl;
	}
#endif // SHASHK
}