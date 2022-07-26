#include <iostream>
#include <string>
using namespace std;

class String {
public:
    String() {
        strData = NULL;
        len = 0;
    }
    String(const char* str) {
        len = strlen(str);
        strData = new char[len + 1];
        strcpy(strData, str);
    }
    ~String() {
        delete[] strData;
    }
    char* GetStrData() {
        return strData;
    }
    int GetLen() const {
        return len;
    }
private:
    char* strData;
    int len;
};



int main() {
    String s;
    return 0;
}