#include <iostream>

using namespace std;

int* getArray(int N) {
    auto arr = new int[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = i;
    }
    return arr;
}



int main() {
  int N = 10;
  int* arr = getArray(N);

  cout << "arr[0] = " << arr[0] << endl;
  cout << "*arr = " << *arr << endl;
  cout << "*(arr + 5) = " << *(arr + 5) << endl;
  cout << "*(arr + 9) = " << *(arr + 9) << endl;
  cout << "*(arr + 10) = " << *(arr + 10) << endl;


  return 0;
}
