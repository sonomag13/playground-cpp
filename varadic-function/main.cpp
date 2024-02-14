#include <iostream>
#include <vector>

template <class T>
std::vector<T> vectorizeEle(std::initializer_list<T> args) {

    std::vector<T> output;
    for (auto arg = args.begin(); arg != args.end(); ++arg) {
        output.push_back(arg);
    }
    return output;
}


int main() {

    vectorizeEle<int>({1, 2, 3});

    return 0;
}
