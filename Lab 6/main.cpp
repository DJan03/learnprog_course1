#include <iostream>
#include <math.h>

using namespace std;

void task_1() {
	float a, b, tmp;
	cout << "TASK 1\nChange A B\nA B\n";
	cin >> a >> b;

	tmp = a;
	a = b;
	b = tmp;
	cout << "\nA is " << a;
	cout << "\nB is " << b;
	cout << "\n\n";
}

void task_2() {
	float a, b, c, tmp;
	cout << "TASK 2\nChange A B C\nA->B B->C C->A\nA B C\n";
	cin >> a >> b >> c;

	tmp = c;
	c = b;
	b = a;
	a = tmp;

	cout << "\nA is " << a;
	cout << "\nB is " << b;
	cout << "\nC is " << c;
	cout << "\n\n";
}

void task_3() {
	float a, b, c, tmp;
	cout << "TASK 3\nChange A B C\nA->C C->B B->A\nA B C\n";
	cin >> a >> b >> c;

	tmp = a;
	a = b;
	b = c;
	c = tmp;

	cout << "\nA is " << a;
	cout << "\nB is " << b;
	cout << "\nC is " << c;
	cout << "\n\n";
}

void task_4() {
	float x, y;
	cout << "TASK 4\nCalculate y=3x^6 - 6x^2 - 7\nX\n";
	cin >> x;

	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

	cout << "\nY is " << y;
	cout << "\n\n";
}

void task_5() {
	float x, y;
	cout << "TASK 5\nCalculate y=4(x-3)^6 - 7(x-3)^3 + 2\nX\n";
	cin >> x;

	y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;

	cout << "\nY is " << y;
	cout << "\n\n";
}

void task_6() {
	float a, t;
	cout << "TASK 6\nCalculate A^8 with 3 operations\nA\n";
	cin >> a;

	t = a;
	t *= t;
	t *= t;
	t *= t;

	cout << "\nAnswer is " << t;
	cout << "\n\n";
}

void task_7() {
	float a, x, y;
	cout << "TASK 7\nCalculate A^15 with 5 operations\nA\n";
	cin >> a;

	x = a * a; // 2
	x = x * a; // 3
	y = x * x; // 6
	y = y * y; // 12
	a = x * y; // 15

	cout << "\nAnswer is " << a;
	cout << "\n\n";
}

int main() {
	task_1();
	task_2();
	task_3();
	task_4();
	task_5();
	task_6();
	task_7();

	return (0);
}