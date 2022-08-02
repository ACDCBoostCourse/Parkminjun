#include <iostream>
using namespace std;

int main() {
	int wol[10], start[10];
	for (int i = 0; i < 9; i++) {
		cin >> wol[i];
	}
	for (int i = 0; i < 9; i++) {
		cin >> start[i];
	}
	int wol_score=0, start_score=0;
	int win = 0;
	for (int i=0; i<9; i++) {

		wol_score += wol[i];
		if (wol[0] != 0 ) { win = 1; }
		start_score += start[i];
		int cons_score = start_score - start[i];

		if (wol_score > cons_score) win = 1;
		
	}
	if (win == 1) { cout << "Yes"; }
	else cout << "NO";
	return 0;
}