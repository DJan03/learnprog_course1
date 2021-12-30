#include <iostream>

using namespace std;

void task_1() {
	int n;
	int* arr;

	cout << "TASK 1\nCreate array (size N) looks like 1, 3, 5, 7 etc\n\nN (size of array)\n";
	cin >> n;

	arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) {
		cout << "No space\n\n";
		return ;
	}

	for (int i = 0; i < n; i++)
		arr[i] = i * 2 + 1;

	cout << "\nArray: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n\n";
}

void task_2() {
	int n, a, d, tmp;
	int* arr;

	cout << "TASK 2\nCreate array (size N > 1) of geometric progression\nA is first element, D is multiplier\n\nN A D\n";
	cin >> n >> a >> d;

	arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) {
		cout << "No space\n\n";
		return;
	}
	
	tmp = a;
	for (int i = 0; i < n; i++) {
		arr[i] = tmp;
		tmp *= d;
	}

	cout << "\nArray: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n\n";
}

void task_3() {
	int n, a, b, sum;
	int* arr;

	cout << "TASK 3\nCreate array (size N > 2) starts with A and B\nNext elements is sum of previous\nA, B, A + B etc\n\nN A B\n";
	cin >> n >> a >> b;

	arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) {
		cout << "No space\n\n";
		return;
	}

	arr[0] = a;
	arr[1] = b;
	sum = a + b;
	for (int i = 2; i < n; i++) {
		arr[i] = sum;
		sum += sum;
	}

	cout << "\nArray: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n\n";
}

void task_4() {
	int n;
	int* arr;

	cout << "TASK 4\nRead array A (size N)\nReturn A1, An, A2, A(n-1) etc\n\nN (size of array)\n";
	cin >> n;

	arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray:\n";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "\Return: ";
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0)
			cout << arr[(int)(i / 2)] << " ";
		else
			cout << arr[n - (int)((i - 1) / 2) - 1] << " ";
	}
	cout << "\n\n";
}

void task_5() {
	int n;
	int* arr;

	cout << "TASK 5\nRead array A (size N)\nReturn A1, A3, A5 etc\nReturn A8, A6, A4 etc\n\nN (size of array)\n";
	cin >> n;

	arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray:\n";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "\Return odd: ";
	for (int i = 0; i < n; i += 2) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	cout << "\Return even: ";
	for (int i = n - n % 2 - 1; i > 0; i -= 2) {
		cout << arr[i] << " ";
	}
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