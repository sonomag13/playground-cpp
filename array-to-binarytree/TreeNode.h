//
// Created by lu.gao on 12/16/19.
//

#ifndef ARRAY_TO_BINARYTREE_TREENODE_H
#define ARRAY_TO_BINARYTREE_TREENODE_H

#include <iostream>
#include <math.h>
#include <queue>

using namespace std;

template <typename T>
class TreeNode {
public:

    T val;
    TreeNode *right, *left;

    void setTreeNode(T &val) {
        this->val = val;
        this->left = this->right = nullptr;
    }

    void array2tree(queue<T>* qinptr, TreeNode<T>* rootptr) {
        auto qparenttr = new queue<TreeNode<T>*>;                // create a queue to beuffer the parent
        rootptr->setTreeNode(qinptr->front());      // set the first node
        qinptr->pop();                              // pop the node from the input queue
        qparenttr->push(rootptr);                   // push the root into the queue
        int levelcnt = 0;                           // counter of level
        int Np;                                     // parent node
        while(!qinptr->empty()) {
            Np = pow(2, levelcnt);               // number of the parent nodes at a gieven level
            levelcnt++;
            for(int j = 0; j < Np; j++) {
                auto parentptr = qparenttr->front();
                qparenttr->pop();
                if(qinptr->size() >= 2) {
                    parentptr->left = insertNode(qinptr, qparenttr);
                    parentptr->right = insertNode(qinptr, qparenttr);
                }
                if(qinptr->size() == 1) {
                    parentptr->left = insertNode(qinptr, qparenttr);
                }
            }
        }
    }

    void printNode() {
        cout << "print out the node information" << endl;
        cout << "\tval = " << val << endl;
        cout << "\tleft = " << left << endl;
        cout << "\tright = " << right << endl;
    }

private:

    TreeNode<T>* insertNode(queue<T>* qinptr, queue<TreeNode<T>*>* qparenttr) {
        auto newptr = new TreeNode<T>;
        newptr->setTreeNode(qinptr->front());
        qinptr->pop();
        qparenttr->push(newptr);
        return newptr;
    }

};


#endif //ARRAY_TO_BINARYTREE_TREENODE_H
