#include<iostream>
#include<conio.h>

using namespace std;
using std::cout;

#define Escape 27
//#define TASK_1
//#define TASK_2
//#define TASK_3

void main()
{
	setlocale(LC_ALL, "");
	/*int i = 0; //������� �����
	int n; // ���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << i << " Hello World\n";
		i++;
	}*/

	/*int n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << " Hello World\n";
	}*/

	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);

#ifdef TASK_1
	int num, a, b, c;
	cout << "������� �����: " << endl;
	cin >> num;
	a = num;
	b = 0;
	c = 0;
	do
	{
		b = a % 10;
		c = c * 10 + b;
		a = a / 10;
	} while (a > 0);

	if (c == num)
	{
		cout << "����� - ���������" << endl;
	}
	else
	{
		cout << "����� - �� ��������" << endl;
	}
#endif // TASK_1

#ifdef TASK_2
	cout << "������� ����� ������ (6 ����): ";
	char n[7];
	cin >> n;
	cout << (n[0] + n[1] + n[2] == n[3] + n[4] + n[5] ?
		"Happy\n" :
		"��� ������� �����\n");
#endif // TASK_2

#ifdef TASK_3
	char a = _getch();
	if (a == -26)
	{
		cout << "������" << endl;
	}
	else if (a == -28)
	{
		cout << "�����" << endl;
	}
	else if (a == -94)
	{
		cout << "������" << endl;
	}
	else if (a == -21)
	{
		cout << "�����" << endl;
	}
	else if (a == 32)
	{
		cout << "������" << endl;
	}
	else if (a == 13)
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "ERROR";
	}
#endif // TASK_3

}