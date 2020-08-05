#include <cstring>
#include <iostream>
#include <sstream>

using namespace std;

const size_t msgLen = 1024; 

int main(int argc, char** argv) {

    // msg is created for string print
    char msg[msgLen]; // = (char*) malloc(msgLen);

    cout << "argc = " << argc << endl;
    
    // print out all the arguments
    for (int i = 0; i < argc; i++) {
        memset(msg, 0, msgLen - 1); 
        sprintf(msg, "\targv[%d] = %s", i, argv[i]);
        cout << msg << endl;
    }    
    
    size_t num; 
    stringstream ss(argv[1]);
    ss >> num; 
    cout << "num = " << num << endl; 

    cout << "\n----------------let us take a a look at the addresses----------------\n" << endl; 
    cout << "using this command line to test the code:\n\t./main arg1 arg2 arg3" << endl; 

    cout << "\nthe address of the string array" << endl;
    cout << "\targv = " << argv << endl; 

    cout << "\nthe first dereference returns the first entry in the array" << endl;
    cout << "\t*argv = " << *argv << endl; 

    cout << "\nthe second dereference returns the first character of the first entry int the array" << endl;
    cout << "\t**argv = " << **argv << endl; 

    cout << "\nnotice that the name of the array is a pointer, we apply and offset on it\ne.g. if applying an offset of 3, it will return the 3rd entry of the array" << endl;
    cout << "\t*(argv + 3) = " << *(argv + 3) << endl; 

    cout << "\nthe address of the first string is equal to argv" << endl; 
    cout << "\t&argv[0] = " << &argv[0] << endl; 

    cout << "\nif you really want to go there, the dereference of the address first entry\nin the array returns the first entry" << endl; 
    cout << "\t*(&argv[0]) = " << *(&argv[0]) << endl; 

    cout << "\nthis line is equal to *(argv + 1)" << endl; 
    cout << "\targv[1] = " << argv[1] << endl;

    cout << "\nfirst character of the first entry in the array" << endl; 
    cout << "\targv[0][0] = " << argv[0][0] << endl; 

    return EXIT_SUCCESS;

}