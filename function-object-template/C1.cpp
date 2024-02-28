//
// Created by lgao23 on 2/22/24.
//

#include "C1.h"

template<class T1, class T2>
void C1::print(T1 v1, T2 v2) {
    std::cout << "v1 = " << v1 << std::endl;
    std::cout << "v2 = " << v2 << std::endl;
}

template void C1::print<int, int>(int, int);
template void C1::print<int, float>(int, float);