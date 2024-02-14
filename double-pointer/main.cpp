/**
 * why do we need double pointer?
 * 1. pass the double pointer as a reference to a pointer to catch another pointer
 * 2. multi-dimensional array, such as 2D array, 3D array, etc.
 *
 *  We use the first application as the example here
 *
 * Ref.: https://www.youtube.com/watch?v=k6ESk9zafHM
 * */

#include <iostream>

using namespace std;

int main() {

    /**
     * a single pointer points to an integer
     * a double pointer points to the single pointer as mentioned above;
     **/
    auto singleIntPtr = new int(5);
    int** doubleIntPtr{&singleIntPtr};

    // before changing
    cout << "Before changing: " << endl;
    cout << "\tsingleIntPtr = " << singleIntPtr << endl;
    cout << "\t*singleIntPtr = " << *singleIntPtr << endl;
    cout << "\tdoubleIntPtr = " << doubleIntPtr << endl;
    cout << "\t*doubleIntPtr = " << *doubleIntPtr << endl;
    cout << "\t**doubleIntPtr = " << **doubleIntPtr << endl;

    {
        /**
         * This lambda function generates a new pointer pointing to val, and let the double pointer point to it.
         * Passing the double pointer is similar to passing by reference, and the newly generated pointer can be
         * pointed to the double pointer. The pointer is still accessible when the function returns.
         *
         * Why?
         * In this case, we use new int as an example, and seemingly makes no sense. But in some cases, the function
         * calls another function, and the other function returns a pointer. In this case, we would like to use a
         * double pointer to catch this newly generated pointer
         **/
        auto changePointer = [] (int** doubleIntPtr, int val) {
            /**
             * since the double pointer points to single pointer, this operation will overload the single pointer
             **/
            *doubleIntPtr = new int(val);
        };
        changePointer(doubleIntPtr, 4);
    }

    cout << "\n\nAfter the 1st change: " << endl;
    cout << "\tsingleIntPtr = " << singleIntPtr << endl;
    cout << "\t*singleIntPtr = " << *singleIntPtr << endl;
    cout << "\tdoubleIntPtr = " << doubleIntPtr << endl;
    cout << "\t*doubleIntPtr = " << *doubleIntPtr << endl;
    cout << "\t**doubleIntPtr = " << **doubleIntPtr << endl;

    {
        /**
        * this is another way to change the single pointer that the double pointer pointing to. In this case the double
         * pointer is not passed as a reference, and instead the new value of the single pointer is returned by the
         * function
         **/
        auto changePointer = [] (int val) {
            return new int(val);
        };
        *doubleIntPtr = changePointer(100);
    }

    cout << "\n\nAfter the 2nd change: " << endl;
    cout << "\tsingleIntPtr = " << singleIntPtr << endl;
    cout << "\t*singleIntPtr = " << *singleIntPtr << endl;
    cout << "\tdoubleIntPtr = " << doubleIntPtr << endl;
    cout << "\t*doubleIntPtr = " << *doubleIntPtr << endl;
    cout << "\t**doubleIntPtr = " << **doubleIntPtr << endl;

    {
        auto changePointer = [] (int* singleIntPtr, int val) {
            /**
             * since the double pointer points to single pointer, this operation will overload the single pointer
             **/
             cout << "singleIntPtr = " << singleIntPtr << endl;
            singleIntPtr = new int(val);
        };
        changePointer(singleIntPtr, 500);
    }

    cout << "\n\nAfter the 3rd change: " << endl;
    cout << "\tsingleIntPtr = " << singleIntPtr << endl;
    cout << "\t*singleIntPtr = " << *singleIntPtr << endl;
    cout << "\tdoubleIntPtr = " << doubleIntPtr << endl;
    cout << "\t*doubleIntPtr = " << *doubleIntPtr << endl;
    cout << "\t**doubleIntPtr = " << **doubleIntPtr << endl;

    delete singleIntPtr;

    return EXIT_SUCCESS;
}


