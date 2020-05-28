#include <iostream>
#include "TreeNode.h"
#include "Helper.h"

using namespace std;

int main() {

    // int arr[] = {0, 1, 2, 3, 4, 5, 6};
    // TreeNode<int>* rootptr = new TreeNode<int>;
    // queue<int>* qinptr = new queue<int>;
    // vector<vector<int>>* vptr = new vector<vector<int>>;
    char arr[] = {'0', '1', '2', '3', '4', '5', '6'};
    TreeNode<char>* rootptr = new TreeNode<char>;
    queue<char>* qinptr = new queue<char>;
    vector<vector<char>>* vptr = new vector<vector<char>>;
    int N = sizeof(arr) / sizeof(arr[0]);
    Helper::array2vector(qinptr, arr, N);
    rootptr->array2tree(qinptr, rootptr);
    Helper::tree2vector(rootptr, vptr);
    Helper::print_vector(vptr);
    delete rootptr;
    return 0;

}
