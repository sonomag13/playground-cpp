#include <iostream>
#include <queue>
#include "DataStructure.h"

using namespace std;


int main() {
    int array[] = {15, 8, 24, 5, 13, 19, 28, 2, 6, 12, 25};
    // BSTNode root(array[0]);
    /*
    BSTNode* ptrRoot;
    ptrRoot->val = array[0];
     */

    BSTNode RootNode(array[0]);

    for(int i = 1; i < sizeof(array)/sizeof(int); i++) {
        BSTNode parentNode = RootNode;
        BSTNode currentNode(array[i]);
        while(true) {
            if(currentNode.val < parentNode.val) {
                if (parentNode.left == NULL) {
                    parentNode.left = &currentNode;
                    cout << "val = " << currentNode.val << " is inserted" << endl;
                    break;
                }
                else {
                    parentNode = *(parentNode.left);
                }
            }
            if(currentNode.val > parentNode.val) {
                if(currentNode.right != NULL) {
                    parentNode.right = &currentNode;
                    cout << "val = " << currentNode.val << " is inserted" << endl;
                    break;
                }
                else {
                    parentNode = *(parentNode.right);
                }
            }
        }
    }

    /*
    for(int i = 1; i < sizeof(array)/sizeof(int); i++) {
        BSTNode* ptrParentNode = ptrRoot;
        BSTNode* ptrCurrentNode;
        BSTNode CurrentNode(array[i]);
        ptrCurrentNode->val = array[i];
        while(true) {
            if(ptrCurrentNode->val < ptrParentNode->val) {
                if (ptrParentNode->left == NULL) {
                    ptrParentNode->left = ptrCurrentNode;
                    cout << "val = " << ptrCurrentNode->val << " is inserted" << endl;
                    break;
                }
                else {
                    ptrParentNode = ptrParentNode->left;
                }
            }
            if(ptrCurrentNode->val > ptrParentNode->val) {
                if(ptrCurrentNode->right != NULL) {
                    ptrParentNode->right = ptrCurrentNode;
                    cout << "val = " << ptrCurrentNode->val << " is inserted" << endl;
                    break;
                }
                else {
                    ptrParentNode = ptrParentNode->right;
                }
            }
        }
    }
     */

    return 0;

}
