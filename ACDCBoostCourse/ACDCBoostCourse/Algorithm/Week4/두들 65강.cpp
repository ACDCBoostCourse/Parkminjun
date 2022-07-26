#include <iostream>
using namespace std;

/*int main() {
  int *a = new int(5);
  cout << *a << endl;
  delete a;

  return 0;
}
int main() {
  int *arr;
  int len;
  cin>> len;

  arr = new int[len];
  for (int i=0; i<len; i++){
    arr[i] = len-i;
  }
  for(int i=0; i<len; i++){
    cout << arr[i] << endl;
  }
  delete[] arr;

  return 0;
}*/
class Vector2 {
public:
    Vector2() : x(0), y(0) {
        cout << this << " :Vector2()" << endl;
    }
    Vector2(const float x, const float y) : x(x), x(y) {
        cout << this << " :Vector2(const float x, const float y)" << endl;
    }
    ~Vector2() {
        cout << this << " :~Vector2()" << endl;
    }
    float GetX() const { return x; }
    float GetY() const { return y; }
private:
    float x, y;
};

int main() {
    Vector2 s1 = Vector();
    Vector2 s2 = Vector(3, 2);
    Vector2* d1 = new Vector();
    Vector2* d2 = new Vector(3, 2);

    cout << d1->GetX() << ", " << d1->GetY() << endl;
    cout << d2->GetX() << ", " << d2->GetY() << endl;

    delete d1;
    delete d2;
}