#include <functional>
#include <iostream>

using namespace std; 

template<typename T1, typename T2>
void print1(const T1&, const T2&);

template<typename T>
void print2(const T&, const string&);

template<typename T>
void print3(const T&, const string&, const string&);

int main() {

    int x{1};
    int y{2};

    auto boundFunc1 = std::bind(&print1<int, int>, x, y);         

    boundFunc1(); 

    double val = 3.14; 
    auto boundFunc2 = std::bind(&print2<double>, val, std::placeholders::_1);
    boundFunc2("hello world~!"); 

    auto boundFunc3 = std::bind(&print3<double>, val, std::placeholders::_1, std::placeholders::_2);
    boundFunc3("hello", "baby Lucas"); 

    return EXIT_SUCCESS; 

}

template<typename T1, typename T2>
void print1(const T1& x, const T2& y) {
    cout << "x = " << x << endl; 
    cout << "y = " << y << endl; 
    cout << "x + y = " << x + y << endl; 
}

template<typename T>
void print2(const T& val, const string& strIn) {
    cout << "val = " << val << endl; 
    cout << "the string is " << strIn << endl;     
}

template<typename T>
void print3(const T& val, const string& str1, const string& str2) {
     cout << "val = " << val << endl; 
     cout << "str1 = " << str1 << endl; 
     cout << "str2 = " << str2 << endl; 
}