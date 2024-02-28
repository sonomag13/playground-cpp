//
// Created by lgao23 on 2/22/24.
//

#pragma once

#include <iostream>

class C1 {
public:
    C1() = default;
    C1(int x, float y): x(x), y(y) {}
    ~C1() = default;

    int printVal(int z) {
        std::function<void(int, int)> f1 = [this](int x1, int x2)->void{print<int, int>(x1, x2);};
        f1(z, x);

        std::function<void(int, float)> f2 = [this](int x1, float x2)->void{print<int, float>(x1, x2);};
        f2(z, y);

        return 0;
    }

private:
    int x = 0;
    float y = 0.0;

     template<class T1, class T2>
     void print(T1, T2);

//    template<class T1, class T2>
//    void print(T1 v1, T2 v2) {
//        std::cout << "v1 = " << v1 << std::endl;
//        std::cout << "v2 = " << v2 << std::endl;
//    }
};

