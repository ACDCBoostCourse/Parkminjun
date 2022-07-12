#include <iostream>
using namespace std;

int main() {
	int N;

	cin >> N;
	if (N < 100) {
		cout << N;
	}
	else {
		int count = 0;
		for (int i = 100; i <= N; i++) {
			int third = i % 10;
			int second = (i / 10) % 10;
			int first = i / 100;
			if ( (first - second) == (second - third) ) {
				count++;
			}
		}
		cout << 99+count;
	}
	
	return 0;
}