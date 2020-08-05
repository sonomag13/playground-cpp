#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void traverseVect(const vector<int>& vectIn, void(*func)(int)) {
    for (auto val : vectIn) {
        func(val);
    }
}

int main() {

    vector<int> vect1{0, 1, 2, 3, 4};

    // this is a primitive lambda function
    // traverseVect(vect1, [](int val) {cout << "val = " << val << endl;});

    /**
     * Ref: https://en.cppreference.com/w/cpp/language/lambda
     * in [], captures in included
     *
     */
    int a = 5;
    auto lambda1 = [](int val) {cout << "val = " << val << endl;};
    traverseVect(vect1, lambda1);

    // a more useful case
    auto lambda2 = [](int val) {return val > 3;};
    auto it = find_if(vect1.begin(), vect1.end(), lambda2);
    cout << *it << endl;

    return EXIT_SUCCESS;
}
