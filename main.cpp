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
	
	trojkat.bok_a = 4;
	trojkat.bok_b = 3;
	trojkat.bok_c = 5;
	trojkat.h = 4;
	
	cout << "Pole trojkata wynosi: " << trojkat.obliczPole() << endl;
	cout << "Obwod trojkata wynosi: " << trojkat.obliczObwod() << endl;
	
	
	
	return 0;
}
