#include <iostream>
#include <math.h>

using namespace std;

// Calculate S and P for Rectangle
void task1() {
	cout << "\tTASK 1\n\n";
	float a, b, s, p;
	cin >> a >> b;

	s = a * b;
	p = (a + b) * 2;
	cout << "S is " << s << "\n";
	cout << "P is " << p << "\n";

	cout << "\n";
}

// Calculate Length of Circle
void task2() {
	cout << "\tTASK 2\n\n";
	float d, length, pi;
	pi = 3.14;
	cin >> d;

	length = d * pi;
	cout << "Length is " << length << "\n";

	cout << "\n";
}

// Calculate Average of A and B
void task3() {
	cout << "\tTASK 3\n\n";
	float a, b, average;
	cin >> a >> b;
	average = (a + b) / 2;
	cout << "Average is " << average << "\n";

	cout << "\n";
}

// Calculate sum, dif, mul, div Sq
void task4() {
	cout << "\tTASK 4\n\n";
	float a, b, sum, dif, mul, div;
	cin >> a >> b;
	a = a * a;
	b = b * b;

	sum = a + b;
	dif = a - b;
	mul = a * b;
	div = a / b;
	cout << "Sum is " << sum << "\n";
	cout << "Dif is " << dif << "\n";
	cout << "Mul is " << mul << "\n";
	cout << "Div is " << div << "\n";

	cout << "\n";
}

// Calculate sum, dif, mul, div Sq with ABS
void task5() {
	cout << "\tTASK 5\n\n";
	float a, b, sum, dif, mul, div;
	cin >> a >> b;
	a = abs(a);
	b = abs(b);

	sum = a + b;
	dif = a - b;
	mul = a * b;
	div = (a * a) / (b * b);
	cout << "Sum is " << sum << "\n";
	cout << "Dif is " << dif << "\n";
	cout << "Mul is " << mul << "\n";
	cout << "Div is " << div << "\n";

	cout << "\n";
}

int main() {
	task1();
	task2();
	task3();
	task4();
	task5();

	return (0);
}