#include <iostream>
#include <math.h>

using namespace std;

void task_1() {
	float x1, x2, y1, y2, d;
	cout << "TASK 1\nDistance from 2 points\nX1 Y1\n";
	cin >> x1 >> y1;
	cout << "\nX2 Y2\n";
	cin >> x2 >> y2;

	d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	cout << "\nDistance is " << d;
	cout << "\n\n";
}

void task_2() {
	float ax, ay, bx, by, cx, cy, aclength, bclength;
	cout << "TASK 2\nLength AC, BC and sum";
	cout << "\nAx, Ay\n";
	cin >> ax >> ay;
	cout << "\nBx, By\n";
	cin >> bx >> by;
	cout << "\nCx, Cy\n";
	cin >> cx >> cy;

	aclength = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));
	bclength = sqrt(pow(bx - cx, 2) + pow(by - cy, 2));

	cout << "\nAC length is " << aclength;
	cout << "\nBC length is " << bclength;
	cout << "\nSum is " << aclength + bclength;
	
	cout << "\n\n";
}

void task_3() {
	float a, b, c, mul;
	cout << "TASK 3\nA, B, C on axis. Calculate AC * BC";
	cout << "\nA B C\n";
	cin >> a >> b >> c;

	mul = -(a - c) * (b - c);

	cout << "\Result is " << mul;

	cout << "\n\n";
}

void task_4() {
	float x1, y1, x2, y2, tmp, s, p;
	cout << "TASK 4\n2 ages of rectangle. Calculate S, P";
	cout << "\nAx, Ay\n";
	cin >> x1 >> y1;
	cout << "\nBx, By\n";
	cin >> x2 >> y2;

	s = abs(x1 - x2) * abs(y1 - y2);
	p = abs(x1 - x2) * 2 + abs(y1 - y2) * 2;

	cout << "\nS is " << s;
	cout << "\nP is " << p;

	cout << "\n\n";
}

void task_5() {
	float x1, y1, x2, y2, x3, y3, a, b, c, s, p, h;
	cout << "TASK 5\n3 ages of triangle. Calculate S, P";
	cout << "\nAx, Ay\n";
	cin >> x1 >> y1;
	cout << "\nBx, By\n";
	cin >> x2 >> y2;
	cout << "\nCx, Cy\n";
	cin >> x3 >> y3;

	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	p = a + b + c;
	h = p / 2;
	s = sqrt(h * (h - a) * (h - b) * (h - c));

	cout << "\nS is " << s;
	cout << "\nP is " << p;

	cout << "\n\n";
}

int main() {
	task_1();
	task_2();
	task_3();
	task_4();
	task_5();

	return (0);
}