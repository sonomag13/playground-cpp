// Tis coding practice is to review the BST

#include <iostream>
#include "BST.h"

using namespace std;

int main() {

    int keyArray[] = {7, 5, 8, 4, 6, 9, 12};
    char valueArray[] = {'G', 'E', 'H', 'D', 'F', 'I', 'L'};
    auto BST0 = new BST<int, char>;
    auto BST1 = new BST<int, char>;

    for(int i = 0; i < sizeof(keyArray)/sizeof(int); i++) {
        cout << "i = " << i << "\n\tkey = " << keyArray[i] << " and value = " << valueArray[i] << endl;
        // insert by recursive method
        BST0->recursiveInsert(keyArray[i], valueArray[i]);
        // insert by non-recursive method
        BST1->nonRecursiveInsert(keyArray[i], valueArray[i]);
    }

    cout << "\n\nBST built by recursive method" << endl;
    BST0->printNodeInfo();

    cout << "\n\nBST built by none recursive method" << endl;
    BST1->printNodeInfo();

    int targetKey = 6;
    std::string targetValue = BST0->search(targetKey);

    cout << "\n\ntarget key = " << targetKey << " and targetValue = " << targetValue << endl;


    return 0;

}
