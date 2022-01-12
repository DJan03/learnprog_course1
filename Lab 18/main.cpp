#include <iostream>

using namespace std;

void task_1() {
	int n, tmp;
	int* a;
	int* b;

	cout << "TASK 1\nArray A and B(size N)\nSwap A and B\n\nN\n";
	cin >> n;

	// array A
	a = (int*)malloc(sizeof(int) * n);
	if (a == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray A:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	// array B
	b = (int*)malloc(sizeof(int) * n);
	if (b == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray B:\n";
	for (int i = 0; i < n; i++)
		cin >> b[i];

	for (int i = 0; i < n; i++) {
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
	cout << "\n\nResult\nArray A: ";
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << "\nArray B: ";
	for (int i = 0; i < n; i++) cout << b[i] << " ";
	cout << "\n\n";
}

void task_2() {
	int n, sum = 0;
	int* a;
	float* b;

	cout << "TASK 2\nArray A (size N)\nGenerate new array B there Bk = AVERAGE(1, k)\n\nN\n";
	cin >> n;

	a = (int*)malloc(sizeof(int) * n);
	if (a == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];

	b = (float*)malloc(sizeof(float) * n);
	if (b == NULL) {
		cout << "No space\n\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		sum += a[i];
		b[i] = (float)sum / (i + 1);
	}

	cout << "\nResult: ";
	for (int i = 0; i < n; i++) cout << b[i] << " ";
	cout << "\n\n";
}

void task_3() {
	int n, delta;
	int* a;
	bool have_delta = false;

	cout << "TASK 3\nArray A (size N)\nAdd to ODD numbers LAST ODD number\n\nN\n";
	cin >> n;

	a = (int*)malloc(sizeof(int) * n);
	if (a == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++)
		if (a[i] % 2) {
			have_delta = true;
			delta = a[i];
		}
	if (have_delta) {
		for (int i = 0; i < n; i++)
			if (a[i] % 2)
				a[i] += delta;
	}
	cout << "\nResult: ";
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << "\n\n";
}

void task_4() {
	int n, da = 0, db = 0, tmp;
	int* a;

	cout << "TASK 4\nArray A (size N)\nSet 0 to elements between MIN and MAX\n\nN\n";
	cin >> n;

	a = (int*)malloc(sizeof(int) * n);
	if (a == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) {
		if (a[i] > a[da]) da = i;
		if (a[i] < a[db]) db = i;
	}
	if (da > db) {
		tmp = da;
		da = db;
		db = tmp;
	}
	for (int i = da + 1; i < db; i++)
		a[i] = 0;
	cout << "\nResult: ";
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << "\n\n";
}

void task_5() {
	int n, tmp;
	int* a;
	bool f = true;

	cout << "TASK 5\nArray A (size N)\nSorted to UP besides first element\n\nN\n";
	cin >> n;

	a = (int*)malloc(sizeof(int) * n);
	if (a == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	tmp = a[0];
	for (int i = 1; i < n; i++) {
		if (tmp > a[i])
			a[i - 1] = a[i];
		else {
			a[i - 1] = tmp;
			f = false;
			break;
		}
	}
	if (f) a[n - 1] = tmp;

	cout << "\nResult: ";
	for (int i = 0; i < n; i++) cout << a[i] << " ";
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