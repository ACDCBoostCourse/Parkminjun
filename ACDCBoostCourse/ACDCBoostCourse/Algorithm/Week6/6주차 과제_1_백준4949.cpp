#include <iostream>
#include <stack>
#include <string>
using namespace std;

//백준은 틀리는데 예시 입출력은 잘나와서 어느부분을 고쳐야할지..? 모르겠습니다ㅠ

int main() { 
	string s;
	
	while (1) {
		getline(cin, s);
		bool tof = true;
		if (s[0] == '.') {
			break;
		}
		stack <char> stack1;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '[' || s[i] == '(') {
				stack1.push(s[i]);
			}
			else if (s[i] == ']') {
				if (stack1.empty()) {
					tof = false;
					break;
				}
				else if (stack1.top() == '[') {
					stack1.pop();
				}
			}
			else if (s[i] == ')') {
				if (stack1.empty()) {
					tof = false;
					break;
				}
				else if (stack1.top() == '(') {
					stack1.pop();
				}
			}

		}
		if (tof == true && stack1.empty()) { cout << "yes" << endl; }
		else { cout << "no" << endl; }
	}
}
