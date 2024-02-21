#include <iostream>
#include <functional>

struct MyClass2 {
    MyClass2() = default;
    MyClass2(int val): val(val) {}
    ~MyClass2() = default;

    int getVal() const {
        return val;
    }

    int addVal(int x) const {
        return x + val;
    }

private:
    int val = 10;
};

struct MyClass {

public:
    MyClass() {};
    ~MyClass() = default;

    void run() {

        // pointer function
        my_func = &MyClass::f1;
        int ret1 = (this->*my_func)();
        std::cout << "ret3 = " << ret1 << '\n';

        my_func = &MyClass::f2;
        int ret2 = (this->*my_func)();
        std::cout << "ret2 = " << ret2 << '\n';

        // modern C++ with function
        my_func_2 = std::bind(&MyClass::f1, this);
        print(my_func_2);

        my_func_2 = std::bind(&MyClass::f2, this);
        print(my_func_2);

        my_func_2 = std::bind(&MyClass2::getVal, *class2);
        print(my_func_2);

        my_func_3 = std::bind(&MyClass2::addVal, *class2, std::placeholders::_1);
        std::cout << "my_func_3(4) = " << my_func_3(4) << std::endl;
    }

private:
    std::unique_ptr<MyClass2> class2 = std::make_unique<MyClass2>(100);
    int (MyClass::*my_func)();  // function pointer
    std::function<int()> my_func_2;  // function object
    std::function<int(int)> my_func_3;  // function object

    int f1() {
        return 1;
    }

    int f2() {
        return 2;
    }

    void print(const std::function<int()> func) {
        int ret = func();
        std::cout << "val = " << ret << std::endl;
    }
};


int main() {

    MyClass my_class;

    my_class.run();

    return 0;
}
