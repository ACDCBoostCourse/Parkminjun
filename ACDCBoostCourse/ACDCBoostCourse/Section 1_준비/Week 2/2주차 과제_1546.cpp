#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	double num_array[10] = {0};
	int N;
	double sum=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int grade;
		cin >> grade;
		num_array[i] = grade;
	}
	sort(num_array, num_array + N);
	for (int i = 0; i < N; i++) {
		sum += num_array[i] / num_array[N - 1] * 100;

	}
	cout << sum / N;
	return 0;
}