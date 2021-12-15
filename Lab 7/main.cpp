#include <iostream>
#include <math.h>

# define PI 3.14

using namespace std;

void task_1() {
	float a = 0, r = 0;
	cout << "TASK 1\nAngle to Radians\n\nAngle a (0-360):\n";
	cin >> a;

	r = (a / 180) * PI;
	cout << "\nAngle a in Radians is " << r;
	cout << "\n\n";
}

void task_2() {
	float r = 0, a = 0;
	cout << "TASK 2\nRadians to Angle\n\nRadian a (0-2PI)\n";
	cin >> r;

	a = (r * 180) / PI;

	cout << "\nRadians a in angles is " << a;
	cout << "\n\n";
}

void task_3() {
	float x = 0, a = 0, y = 0, one = 0, fory = 0;
	cout << "TASK 3\nX kg = A$\n1 kg - ?\nY kg -?\n\nX A Y\n";
	cin >> x >> a >> y;

	if (a <= 0)
	{
		cout << "Why? There is no sence with " << a << "$\n\n";
		return;
	}

	one = a / x;
	fory = one * y;

	cout << "\n1 kg is " << one << "$";
	cout << "\nY kg is " << fory << "$";
	cout << "\n\n";
}

void task_4() {
	float v1 = 0, v2 = 0, s = 0, t = 0, distance = 0;
	cout << "TASK 4\n2 Cars with V1 and V2 speeds (distance is S)\n<-V1 -S- V2->\nDistance 1-2 in T hours\n\nV1 V2 S T\n";
	cin >> v1 >> v2 >> s >> t;

	distance = (v1 + v2) * t + s;

	cout << "\nDistance is " << distance;
	cout << "\n\n";
}

void task_5() {
	float a = 0, b = 0, x = 0;
	cout << "TASK 5\nA*x + B = 0\nA != 0\nX - ?\n\nA B\n";
	cin >> a >> b;

	x = -b / a;

	cout << "\nX is " << x;
	cout << "\n\n";
}

void task_6() {
	float x = 0, y = 0, a1 = 0, b1 = 0, a2 = 0, b2 = 0, c1 = 0, c2 = 0;
	cout << "TASK 6\nA1*x + B1*y = C1\nA2*x + B2*y = C2\n(X, Y) - ?\n\nA1 B1 C1  A2 B2 C2\n";
	// 2 1 -1  5 -3 -19 (-2 3)
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	
	// Метод Гаусса
	y = (c2 - (c1 * a2) / a1) / (b2 - (b1 * a2) / a1);
	x = (c1 - b1 * y) / a1;
	
	cout << "\nX is " << x;
	cout << "\nY is " << y;
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