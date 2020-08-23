#include <iostream>

#include <vector>

using namespace std;

vector<int> reverse_vector(const vector<int>&, size_t);

int main() {

    vector<int> vec1{1, 2, 3, 4, 5};
    vector<int> vec2 = reverse_vector(vec1, vec1.size());

    cout << "\n\nreversed vector" << endl;
    for (auto val : vec2) {
        cout << "\tval = " << val << endl;
    }
    return 0;

}

vector<int> reverse_vector(const vector<int>& vecIn, size_t endIdx) {
    // return value
    vector<int> vecOut{};
    // base case
    if (endIdx == 0) {
        cout << "[recursion] hit the base case" << endl;
        return vecOut;
    }
    cout << "[recursion] endIdx = " << endIdx << " and last val = " << vecIn[endIdx - 1] << endl;
    // push the last value in the the result
    vecOut.push_back(vecIn[endIdx - 1]);
    vector<int> vecRemain = reverse_vector(vecIn, --endIdx);
    vecOut.insert(vecOut.end(), vecRemain.begin(), vecRemain.end());
    return vecOut;
}