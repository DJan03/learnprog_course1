#include <iostream>

using namespace std;

void task_1() {
	int n = 0;
	cout << "TASK 1\nN seconds\n...minutes and ? seconds:\n\nN:\n";
	cin >> n;

	cout << "\n..minutes and " << n % 60 << " seconds";
	cout << "\n\n";
}

void task_2() {
	int k = 0;
	cout << "TASK 2\nMon-1, Tue-2, Sun-0 \nWhat day of the weeeek on K day of year\n1 Jan is Monday\n\nK(1-365):\n";
	cin >> k;

	cout << "\nDay of the week is " << k % 7;
	cout << "\n\n";
}

void task_3() {
	int n = 0, k = 0;
	cout << "TASK 3\nMon-1, Tue-2, Sun-7\nWhat day of the weeeek on K day of year\n1 Jan is N of the week\n\nK(1-365) N(1-7):\n";
	cin >> k >> n;

	cout << "\nDay of the week is " << (n + k - 2) % 7 + 1;
	cout << "\n\n";
}

void task_4() {
	int a = 0, b = 0, c = 0, answer = 0;
	cout << "TASK 4\nRectangle AxB\nOn area placed maximum squares with length C\nHow many squares on rectangle?\n\nA B C\n";
	cin >> a >> b >> c;

	answer = (int)(a / c) * (int)(b / c);

	cout << "\nAnswer is " << answer;
	cout << "\nOther area is " << (a * b) - (c * c) * answer;
	cout << "\n\n";
}

void task_5() {
	int year = 0;
	cout << "TASK 5\nYear. What century is that year (1901 - 20)\n\nYear\n";
	cin >> year;

	cout << "\nCentury is " << (int)((year - 1) / 100) + 1;
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