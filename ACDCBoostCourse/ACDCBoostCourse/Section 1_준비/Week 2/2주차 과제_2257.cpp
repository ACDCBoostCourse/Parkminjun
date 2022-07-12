#include <iostream>
using namespace std;

int main() {
	int num_array[10] = {0};
	int A, B, C;
	cin >> A >> B >> C;
	int num = A * B * C;
	while (num != 0) {
		num_array[num % 10]++;
		num= num / 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << num_array[i] << endl;
	}
	return 0;
}