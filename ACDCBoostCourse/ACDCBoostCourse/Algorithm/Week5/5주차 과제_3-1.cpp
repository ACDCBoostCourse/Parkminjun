#include <iostream>
using namespace std;

// 메인 함수에 아래 코드를 복사해서 붙여넣고 정상 작동하는지 검증하세요!

void swap_array(int *arr, int i, int j) {//swap함수
	int temp = 0;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void sort(int* arr, bool isAscending) {//selection sorting함수
	if (isAscending) {
		for (int i = 0; i < 4; i++) { //최솟값 찾기
			int min = arr[i];
			int location = i;
			for (int j = i + 1; j < 4; j++) {
				if (min > arr[j]) {
					min = arr[j];
					location = j;
				}
			}
			swap_array(arr, i, location); //스왑
		}
	}
	else {
		for (int i = 0; i < 4; i++) { //최댓값 찾기
			int max = arr[i];
			int location = i;
			for (int j = i + 1; j < 4; j++) {
				if (max < arr[j]) {
					max = arr[j];
					location = j;
				}
			}
			swap_array(arr, i, location); //스왑
		}
	}
}


//
int main() {
	int items[4] = { 1,5,3,2 };
	sort(items, true);

	for (int item : items) {
		cout << item << ' ';  // 1 2 3 5
	}

	cout << endl;
	sort(items, false);

	for (int item : items) {
		cout << item << ' ';  // 5 3 2 1
	}
}