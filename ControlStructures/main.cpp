#include<iostream>
using namespace std;

//#define TASK_1
#define TASK_2
//#define TASK_3

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1
	int t;
	cout << "������� ����������� �������: "; cin >> t;
	if (t > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else if (t < 0)
	{
		cout << "�� ����� �������" << endl;
	}
	else
	{
		cout << "�� ����� 0" << endl;
	}
#endif // TASK_1

#ifdef TASK_2
	int c;
	cout << "������� �����: "; cin >> c;
	if (c <= 10)
	{
		cout << "���� ��������" << endl;
	}
	else
	{
		cout << "�� ������������" << endl;
	}
#endif // TASK_2

#ifdef TASK_3
	double a, b;	//�����, �������� � ����������
	char s;	//Sign - ���� ��������
	cout << "������� �������������� ���������: ";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: no operation" << endl;
	}
#endif // TASK_3

#define CONST_1 1
#define CONST_2 2
#define CONST_N 'N'
	int var = 0;
	int code1 = 0;
	int code2 = 0;
	int codeN = 0;
	int default_code = 0;


	switch (var)
	{
	case CONST_1: code1; break;
	case CONST_2: code2; break;
		//...........
		//...........
	case CONST_N: codeN; break;
	default: default_code;
	}




}