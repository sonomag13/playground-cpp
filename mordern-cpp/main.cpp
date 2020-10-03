#include <array>
#include <functional>
#include <iostream>
#include <tuple>
#include <vector>

#include "Helper.h"

using namespace std;

auto add(int a, int b) -> decltype(a + b) {
    return a + b ;
}

template<typename T>
void swap_by_move(T&, T&);

int main() {

    // digital separator
    {
        cout << "\n[feature] digital separator" << endl;
        int num{1'000'000};
        cout << "num = " << num << endl;
    }


    // user-defined literals
    {
        cout << "\n[feature] user-defined literals" << endl;
        using ull = unsigned long long;
        ull a = 1;
        cout << a << endl;
    }


    // decltype
    {
        cout << "\n[feature] decltype" << endl;
        int a{1}, b{2};
        float c = add(a, b);
        char text[1024];
        sprintf(text, "%d + %d = %f", a, b, c);
        cout << text << endl;
    }


    // range based loop
    {
        cout << "\n[feature] range based loop" << endl;
        array<int, 5> arr{0, 1, 2, 3, 4};
        for (auto val : arr) {
            cout << val << endl;
        }
    }

    // move
    {
        cout << "\n[feature] move" << endl;
        vector<int> vec1, vec2;

        cout << "before swap" << endl;
        cout << "\t&vec1 = " << &vec1 << endl;
        cout << "\t&vec2 = " << &vec2 << endl;

        for (int i = 0; i < 10; ++i) {
            vec1.push_back(i);
            vec2.push_back(i * i);
        }
        for (int i = 0; i < 10; ++i) {
            cout << '\t' << vec1[i] << '\t' << vec2[i] << endl;
        }

        using vector_of_int = vector<int>;
        swap_by_move<vector_of_int>(vec1, vec2);
        cout << "after swap" << endl;
        cout << "\t&vec1 = " << &vec1 << endl;
        cout << "\t&vec2 = " << &vec2 << endl;
        for (int i = 0; i < 10; ++i) {
            cout << '\t' << vec1[i] << '\t' << vec2[i] << endl;
        }
    }

    {
        cout << "\n[feature] tuple" << endl;
        tuple<int, string, string, double> record(001, "John", "Doe", 3.14);
        // modifiable
        string& firstName = get<1>(record);
        firstName = "David";
        cout << get<0>(record) << endl;
        cout << get<1>(record) << endl;
        cout << get<2>(record) << endl;
        cout << get<3>(record) << endl;

        tuple<int, string, string, double> record2;
        int id = 002;
        string firstName2 = "Lucy";
        string lastName2 = "Liu";
        double someNum = 47.56;
        someNum = 1.23;
        record2 = make_tuple(ref(id), ref(firstName2), ref(lastName2), ref(someNum));
        cout << get<0>(record2) << endl;
        cout << get<1>(record2) << endl;
        cout << get<2>(record2) << endl;
        cout << get<3>(record2) << endl;
    }

    // Todo: rvalue and lvalue

    return 0;

}

template<typename T>
void swap_by_move(T& v1, T& v2) {
    T tmp(move(v1));
    v1 = move(v2);
    v2 = move(tmp);
}


