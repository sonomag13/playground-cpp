#include <functional>
#include <iostream>

class Class1 {
public:
    Class1(int val) : val{val} {}
    int add(int x) {
        return val + x;
    }

private:
    int val;
};

class Class2 {
public:
    Class2 (int num) : class1{new Class1(num)} {}

    int addNum(int x) {
        auto _addNum = [this](int y) -> int {
            return this->class1->add(y);
        };
        int sum = _addNum(x);
        return sum;
    }

private:
    Class1 * class1 = nullptr;
};

int main() {

    Class2 * c2 = new Class2(100);
    int sum = c2->addNum(100);  // this does not work
    std::cout << "sum = " << sum << std::endl;

    return 0;
}