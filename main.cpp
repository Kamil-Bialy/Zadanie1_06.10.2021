#include <iostream>

using namespace std;

class Triangle{
	public:
		int bok_a, bok_b, bok_c, h;
		
		int obliczPole()
		{
			return (bok_a * h)/2;
		}
		
		int obliczObwod()
		{
			return bok_a + bok_b + bok_c;
		}
};

int main() {
	
	Triangle trojkat;
	
	cout << "Podaj podstawe trojkata: " << endl;
	cin >> trojkat.bok_a;
	while(trojkat.bok_a <= 0)
	{
		cout << "Podaj poprawna wartosc: " << endl;
		cin >> trojkat.bok_a;
	}
	cout << "Podaj pozostale dwa boki trojkata: " << endl;
	cin >> trojkat.bok_b >> trojkat.bok_c;
	while(trojkat.bok_b <= 0 && trojkat.bok_c <= 0)
	{
		cout << "Podaj poprawne wartosci: " << endl;
		cin >> trojkat.bok_b >> trojkat.bok_c;
	}
	cout << "Podaj wysokosc trojkata: " << endl;
	cin >> trojkat.h;
	while(trojkat.h <= 0)
	{
		cout << "Podaj poprawna wartosc: " << endl;
		cin >> trojkat.h;
	}
	
	cout << "Pole trojkata wynosi: " << trojkat.obliczPole() << endl;
	cout << "Obwod trojkata wynosi: " << trojkat.obliczObwod() << endl;
	
	
	
	return 0;
}
