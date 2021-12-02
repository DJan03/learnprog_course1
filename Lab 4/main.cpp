#include <iostream>
#include <math.h>

using namespace std;

// Calculate S and P for Rectangle
void task1() {
	float a, b, s, p;
	cin >> a >> b;

	s = a * b;
	p = (a + b) * 2;
	cout << "S is " << s << "\n";
	cout << "P is " << p << "\n\n";
}

// Calculate Length of Circle
void task2() {
	float d, length, pi;
	pi = 3.14;
	cin >> d;

	length = d * pi;
	cout << "Length is " << length << "\n\n";
}

// Calculate Average of A and B
void task3() {
	float a, b, average;
	cin >> a >> b;
	average = (a + b) / 2;
	cout << "Average is " << average << "\n\n";
}

// Calculate sum, dif, mul, div Sq
void task4() {
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
}

// Calculate sum, dif, mul, div Sq with ABS
void task5() {
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
}

int main() {
	task1();
	//task2();
	//task3();
	//task4();
	//task5();

	return (0);
}