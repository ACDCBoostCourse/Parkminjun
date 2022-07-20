#include <iostream>
#include <string>
using namespace std;

int main() {
	char a[80];
	int N,sum=0;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		int score = 1;
		sum = 0;
		for (int j = 0; j < strlen(a); j++) {
			
			
			if (a[j] == 'O') {
				sum += score;
				score++;
			}
			else {
				score = 1;
			}
		}
		
		cout << sum << endl;
		
	}
	
	return 0;
}