#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ClassWork
//#define Factorial
//#define POWER
//#define ASCII
//#define TABLICA
//#define PIFAGOR




void main()
{
	setlocale(LC_ALL, "");

#ifdef ClassWork
	/*for (;;)
{
	cout << "Hello ";
}*/

	int n;
	cout << "¬ведите количество итераций: ";
	cin >> n;
	//	for(counter; condition; expression)
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // ClassWork

#ifdef Factorial

	int faktor = 1;
	int n;
	cout << "¬ведите целое число дл€ вычислени€ факториала: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		faktor *= i;
	}
	cout << "‘акториал числа " << n << " равен - " << faktor << endl;

#endif // Factorial

#ifdef POWER

	int i, n, a, b;
	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведите показатель степени: "; cin >> b;
	n = a;
	for (i = 1; i < b; i++)
	{
		n = n * a;
	}
	cout << n << endl;

#endif // POWER

#ifdef ASCII

	int i;

	for (i = 0; i < 256; i++)
	{
		if (i % 16 == 0)
		{
			cout << endl;
		}
		cout << (char)i << "  ";
	}
	cout << endl;

#endif // ASCII

#ifdef TABLICA

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\t";
		}
		cout << endl;
	}

#endif // TABLICA

#ifdef PIFAGOR

	for (int i = 1; i <= 10; ++i)
	{
		for (int j = 1; j <= 10; ++j)
			cout << i * j << "\t ";
		cout << endl;
	}

#endif // PIFAGOR

}