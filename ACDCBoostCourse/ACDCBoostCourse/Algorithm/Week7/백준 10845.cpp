#include <iostream>
#include <string>
using namespace std;

class Queue {
public:
	Queue() {
		arr[10000] = { };
		first = 0;
		end = 0;
	}
	void push(const int x);
	int pop();
	int size();
	int empty();
	int front();
	int back();

private:
	int arr[10000];
	int first, end;
};

int main() {
	int input;
	cin >> input;
	Queue queue;
	string s;
	for (int i = 0; i < input; i++) {
		cin >> s;
		if (s == "push") {
			int x;
			cin >> x;
			queue.push(x);
		}
		else if (s == "pop") {
			cout << queue.pop() << endl;
		}
		else if (s == "size") {
			cout << queue.size() << endl;
		}
		else if (s == "empty") {
			cout << queue.empty() << endl;
		}
		else if (s == "front") {
			cout << queue.front() << endl;
		}
		else if (s == "back") {
			cout << queue.back() << endl;
		}
	}

}

void Queue::push(const int x) { arr[end] = x; end += 1; }
int Queue::pop() {
	if (empty()) {
		return -1;
	}
	else {
		first += 1;
		return arr[first - 1];
	}
}
int Queue::size() { return end - first; }
int Queue::empty() {
	if (size() == 0) {
		return 1;
	}
	else return 0;
}
int Queue::front() {
	if (empty()) {
		return -1;
	}
	else
		return arr[first];
}
int Queue::back() {
	if (empty()) {
		return -1;
	}
	else
		return arr[end-1];
}
