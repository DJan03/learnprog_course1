#include <iostream>

using namespace std;

void task_1() {
	int n, last, k = 0, j = 1;
	int* a;
	int* b;

	cout << "TASK 1\nArray A (size N)\nRemove repeats\n\nN\n";
	cin >> n;

	a = (int*)malloc(sizeof(int) * n);
	if (a == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray A:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	for (int i = 1; i < n; i++)
		if (a[i] == a[i - 1])
			k++;

	b = (int*)malloc(sizeof(int) * (n - k));
	if (b == NULL) {
		cout << "No space\n\n";
		return;
	}
	b[0] = a[0];
	for (int i = 1; i < n; i++) {
		if (b[j - 1] == a[i])
			continue;
		b[j++] = a[i];
	}
	cout << "\nArray: ";
	for (int i = 0; i < n - k; i++) cout << b[i] << " ";
	cout << "\n\n";
}

void task_2() {
	int n, k = 0, j = 0, len = 0, t;
	int* a;
	int* af;
	int* b;

	cout << "TASK 2\nArray A (size N)\nRemove Doubles\n\nN\n";
	cin >> n;

	a = (int*)malloc(sizeof(int) * n);
	if (a == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray A:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	// bools
	af = (int*)malloc(sizeof(int) * n);
	if (af == NULL) {
		cout << "No space\n\n";
		return;
	}
	for (int i = 0; i < n; i++)
		af[i] = 0;

	for (int i = 0; i < n; i++) {
		k = 0;
		t = 0;
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j] && af[j] == 0) {
				k++;
				t = j;
				af[j] = 1;
			}
		}
		if (k == 1) {
			af[i] = 2;
			af[t] = 2;
			len += 2;
		}
	}

	b = (int*)malloc(sizeof(int) * (n - len));
	if (b == NULL) {
		cout << "No space\n\n";
		return;
	}
	j = 0;
	for (int i = 0; i < n; i++) {
		if (af[i] == 2)
			continue;
		b[j++] = a[i];
	}

	cout << "\nArray: ";
	for (int i = 0; i < n - len; i++) cout << b[i] << " ";
	cout << "\nLength: " << n - len;
	cout << "\n\n";
}

void task_3() {
	int n, min = 0, max = 0, j = 0;
	int* a;
	int* b;

	cout << "TASK 3\nArray A (size N)\nAdd 0 before MIN and 0 after MAX\n\nN\n";
	cin >> n;

	a = (int*)malloc(sizeof(int) * n);
	if (a == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray A:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];

	b = (int*)malloc(sizeof(int) * (n + 2));
	if (b == NULL) {
		cout << "No space\n\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > a[max]) max = i;
		if (a[i] < a[min]) min = i;
	}
	for (int i = 0; i < n; i++) {
		if (i == min) b[j++] = 0;
		b[j++] = a[i];
		if (i == max) b[j++] = 0;
	}

	cout << "\nArray: ";
	for (int i = 0; i < n + 2; i++) cout << b[i] << " ";
	cout << "\n\n";
}

void task_4() {
	int n, j = 0, delta = 0;
	int* a;
	int* b;

	cout << "TASK 4\nArray A (size N)\nAdd 0 after every NEGATIVE\n\nN\n";
	cin >> n;

	a = (int*)malloc(sizeof(int) * n);
	if (a == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray A:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++) if (a[i] < 0) delta++;

	b = (int*)malloc(sizeof(int) * (n + delta));
	if (b == NULL) {
		cout << "No space\n\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		b[j++] = a[i];
		if (a[i] < 0) b[j++] = 0;
	}

	cout << "\nArray: ";
	for (int i = 0; i < n + delta; i++) cout << b[i] << " ";
	cout << "\n\n";
}

void task_5() {
	int n, j = 0, delta = 0;
	int* a;
	int* b;

	cout << "TASK 5\nArray A (size N)\nAdd 0 before every POSITIVE\n\nN\n";
	cin >> n;

	a = (int*)malloc(sizeof(int) * n);
	if (a == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray A:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++) if (a[i] > 0) delta++;

	b = (int*)malloc(sizeof(int) * (n + delta));
	if (b == NULL) {
		cout << "No space\n\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) b[j++] = 0;
		b[j++] = a[i];
	}

	cout << "\nArray: ";
	for (int i = 0; i < n + delta; i++) cout << b[i] << " ";
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