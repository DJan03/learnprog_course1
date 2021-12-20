#include <iostream>
#include <math.h>

using namespace std;

void task_1() {
	cout << "TASK 1\nA and B\nif A != B, A and B = Max(A, B)\nelse A = 0, B = 0\nA and B - ?\n\nA B\n";
	int a, b;
	cin >> a >> b;

	if (a == b) {
		a = 0;
		b = 0;
	}
	else
	{
		if (a > b)
			b = a;
		else
			a = b;
	}
	cout << "\nA: " << a << "\nB: " << b;
	cout << "\n\n";
}

void task_2() {
	cout << "TASK 2\nA B C\nMax passible sum of 2 numbers\n\nA B C\n";
	int a, b, c, s;
	cin >> a >> b >> c;

	if (a <= b && a <= c)
		s = b + c;
	if (b <= a && b <= c)
		s = a + c;
	if (c <= a && c <= b)
		s = a + b;

	cout << "\nMax sum is " << s;
	cout << "\n\n";
}

void task_3() {
	cout << "TASK 3\nA B C on plane\nB or C placed closer to point A?\n\nAx Ay Bx By Cx Cy\n";
	float ax, ay, bx, by, cx, cy, db, dc;
	cin >> ax >> ay >> bx >> by >> cx >> cy;

	db = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
	dc = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));

	if (db > dc) {
		cout << "\nC is closer. Distance is " << dc;
	}
	else if (db < dc) {
		cout << "\nB is closer. Distance is " << db;
	}
	else {
		cout << "\nSame distance " << dc;
	}
	cout << "\n\n";
}

void task_4() {
	cout << "TASK 4\nPoint not on OX or OY\nIn what quarter does point placed?\n\nX Y\n";
	int x, y, ans;
	cin >> x >> y;

	if (x > 0)
		if (y > 0)
			ans = 1;
		else
			ans = 4;
	else
		if (y > 0)
			ans = 2;
		else
			ans = 3;

	cout << "\nPoint in " << ans << " quarter";
	cout << "\n\n";
}

void task_5() {
	cout << "TASK 5\nNumber\nSay ODD and SIGN of number\n\nN\n";
	int n;
	cin >> n;

	if (n == 0)
		cout << "Zero number";
	else {
		cout << "\n";
		if (n % 2 == 0)
			cout << "Even ";
		else
			cout << "Odd ";
		if (n > 0)
			cout << "positive ";
		else
			cout << "negative ";
		cout << "number";
	}
	cout << "\n\n";
}

void task_6() {
	cout << "TASK 6\nNumber (1 - 999)\nSay ODD and NUMBER OF DIGITS\n\nN\n";
	int n;
	cin >> n;

	if (n % 2 == 0)
		cout << "\nEven ";
	else
		cout << "\nOdd ";

	if (n < 10)
		cout << "one";
	else if (n < 100)
		cout << "two";
	else
		cout << "three";

	cout << "-digit number";
	cout << "\n\n";
}

int main() {
	task_1();
	task_2();
	task_3();
	task_4();
	task_5();
	task_6();

	return (0);
}