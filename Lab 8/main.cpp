#include <iostream>
#include <math.h>

# define PI 3.14

using namespace std;

void task_1() {
	int b = 0, kb = 0;
	cout << "TASK 1\nBytes to KBytes\n\nBytes:\n";
	cin >> b;

	kb = b / 1024;
	cout << "\nKBytes is " << kb;
	cout << "\n\n";
}

void task_2() {
	int a = 0, b = 0, count;
	cout << "TASK 2\nLength A, Length B (A > B)\nHow many B in A\n\nA B\n";
	cin >> a >> b;

	count = a / b;

	cout << "\nCount is " << count;
	cout << "\n\n";
}

void task_3() {
	int a = 0, b = 0, other = 0;
	cout << "TASK 3\nLength A, Length B (A > B)\nMax B in A\nWhat is left?\n\nA B\n";
	cin >> a >> b;

	other = a % b;

	cout << "\nLeft is " << other;
	cout << "\n\n";
}

void task_4() {
	int n = 0, newn = 0;
	cout << "TASK 4\nNumber [ab], Print number [ba]\n\nN\n";
	cin >> n;

	newn = 10 * (n % 10) + n / 10;

	cout << "\nNew number is " << newn;
	cout << "\n\n";
}

void task_5() {
	int n = 0, newn = 0;
	cout << "TASK 5\nNumber [abc], Print number [bca]\n\nN\n";
	cin >> n;

	newn = 10 * (n % 100) + n / 100;

	cout << "\nNew number is " << newn;
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