#include <iostream>

using namespace std;

void task_1() {
	cout << "TASK 1\nA and B\n\"A>2 and B<=3 is true\"\nIs that correct?\n\nA B\n";
	int a, b;
	cin >> a >> b;

	if ((a > 2 && b <= 3) == true)
		cout << "\nCorrect";
	else
		cout << "\nWrong";
	cout << "\n\n";
}

void task_2() {
	cout << "TASK 2\nA B C\n\"A<B<C is true\"\nCorrect?\n\nA B C\n";
	int a, b, c;
	cin >> a >> b >> c;

	if ((a < b < c) == true)
		cout << "\nCorrect";
	else
		cout << "\nWrong";
	cout << "\n\n";
}

void task_3() {
	cout << "TASK 3\nN\n\"N is two-digit even number\"\nCorect?\n\nN(>0)\n";
	int n;
	cin >> n;

	if (n % 2 == 0 && (n >= 10 && n <= 99))
		cout << "\nCorrect";
	else
		cout << "\nWrong";
	cout << "\n\n";
}

void task_4() {
	cout << "TASK 4\nNumber [abc]\nDigits is in order?\n\nN\n";
	int n, a, b, c;
	cin >> n;

	a = n / 100;
	b = n % 100 / 10;
	c = n % 10;

	if ((a - b) * (b - c) > 0)
		cout << "\nYes";
	else
		cout << "\nNo";
	cout << "\n\n";
}

void task_5() {
	cout << "TASK 5\nNumber [abcd] is simmilar with [dcba]?\n\nN\n";
	int n, a, b, c, d;
	cin >> n;

	a = n / 1000;
	b = n % 1000 / 100;
	c = n % 100 / 10;
	d = n % 10;

	if ((a == d) && (b == c))
		cout << "\nYes";
	else
		cout << "\nNo";
	cout << "\n\n";
}

void task_6() {
	cout << "TASK 6\nLengths A B C\nIs it lengths of rect triangle?\n\nA B C\n";
	int a, b, c;
	cin >> a >> b >> c;

	a *= a;
	b *= b;
	c *= c;

	if ((a + b == c) || (b + c == a) || (c + a == b))
		cout << "\nRect Triangle";
	else
		cout << "\nNot";
	cout << "\n\n";
}

void task_7() {
	cout << "TASK 7\nA B C\nIs triangle can be with lengths A B C?\n\nA B C\n";
	int a, b, c;
	cin >> a >> b >> c;

	if ((a > 0 && b > 0 && c > 0) && (a + b > c && b + c > a && c + a > b))
		cout << "\nYes";
	else
		cout << "\nNo";
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