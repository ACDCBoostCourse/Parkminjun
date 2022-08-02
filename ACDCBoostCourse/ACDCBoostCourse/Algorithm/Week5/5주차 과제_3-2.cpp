#include <iostream>
#include <string.h>
using namespace std;

void swap_array(int* arr, int i, int j) {
    int temp = 0;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int* sorted(int* arr, bool isAscending) {
    int* tempArr = (int*)malloc(sizeof(int) * 4);

    memcpy(tempArr, arr, sizeof(int) * 4);

    if (isAscending) {
        for (int i = 0; i < 4; i++) {
            int min = tempArr[i];
            int location = i;
            for (int j = i + 1; j < 4; j++) {
                if (min > tempArr[j]) {
                    min = tempArr[j];
                    location = j;
                }
            }
            swap_array(tempArr, i, location);
        }
    }

    return tempArr;
}

int main() {
    int items[4] = { 1, 5, 3, 2 };
    int* newItems;
    newItems = sorted(items, true);

    for (int item : items) {
        cout << item << ' '; // 1 5 3 2
    }

    cout << endl;

    for (int i = 0; i < 4; i++) {
        cout << newItems[i] << ' ';
    }
}