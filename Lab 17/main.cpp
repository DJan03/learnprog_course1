#include <iostream>

using namespace std;

void task_1() {
	int n, a, b, sum = 0;
	float avg;
	int* arr;

	cout << "TASK 1\nArray (size N)\nWrite average of elements from K to L (included)\n(1 <= K <= L <= N)\n\nN\n";
	cin >> n;

	arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray:\n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "\nK L\n";
	cin >> a >> b;

	for (int i = a - 1; i < b; i++)
		sum += arr[i];

	avg = sum / (b - a + 1);

	cout << "\nAverage: " << avg;
	cout << "\n\n";
}

void task_2() {
	int n, delta = 0;
	int* arr;

	cout << "TASK 2\nArray size N. All elements is unique\nIs array is Arithmetic progression?\n\nN\n";
	cin >> n;

	arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray:\n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	if (n > 1) {
		delta = arr[1] - arr[0];
		for (int i = 2; i < n; i++)
			if (delta != (arr[i] - arr[i - 1])) {
				delta = 0;
				break;
			}
	}
	else {
		cout << "Array is arithmetic progression\nDelta is 0\n\n";
		return;
	}

	cout << "\n";
	if (delta)
		cout << "Array is arithmetic progression\n";
	else
		cout << "Array is not arithmetic progression\n";
	cout << "Delta is " << delta;
	cout << "\n\n";
}

void task_3() {
	int n, min = 0;
	int* arr;

	cout << "TASK 3\nArray size N\nFind minimal element of even num elements\nA2, A4, A6 etc\n\nN\n";
	cin >> n;

	arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray:\n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	min = arr[1];
	for (int i = 3; i < n; i += 2)
		if (min > arr[i])
			min = arr[i];

	cout << "\nMinimal elelemt is " << min;
	cout << "\n\n";
}

void task_4() {
	int n, maxi;
	int* arr;

	cout << "TASK 4\nArray size of N\nReturn number of local max\n\nN\n";
	cin >> n;

	arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray:\n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	maxi = 0;
	for (int i = 1; i < n - 1; i++)
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			maxi = i;
	if (arr[n - 1] > arr[n - 2])
		maxi = n - 1;
	cout << "Number of local maximum " << maxi + 1 << "\n\n";
}

void task_5() {
	int n;
	int* arr;

	cout << "TASK 5\nArray size of N\nTwo similar elements\nWhat is there nums\n\nN\n";
	cin >> n;

	arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) {
		cout << "No space\n\n";
		return;
	}
	cout << "\nArray:\n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] == arr[j]) {
				cout << "Similar elements is " << i + 1 << " and " << j + 1 << "\n\n";
				return;
			}
}

int main() {
	task_1();
	task_2();
	task_3();
	task_4();
	task_5();

	return (0);
}