//
// Created by lu.gao on 12/18/19.
//

#ifndef ARRAY_TO_BINARYTREE_HELPER_H
#define ARRAY_TO_BINARYTREE_HELPER_H

#include <vector>
#include <queue>
#include <math.h>
#include "TreeNode.h"

using namespace std;

namespace Helper {

    template <typename T>
    void array2vector(queue<T>* qptr, T* arr, int N) {
        for(int i = 0; i < N; i++) {
            qptr->push(arr[i]);
        }
    }

    template <typename T>
    void tree2vector(TreeNode<T>* rootptr, vector<vector<T>>* vptr) {
        cout << "\nconvert tree to vector" << endl;
        queue<TreeNode<T>*>* qptr = new queue<TreeNode<T>*>;
        TreeNode<T>* nodeptr;
        qptr->push(rootptr);
        vector<T> row;
        int cnt = 0;
        int N;
        while(!qptr->empty()) {
            cout<< "\tlevel = " << cnt << endl;
            N = pow(2, cnt);
            cnt++;
            for(int i = 0; i < N; i++) {
                nodeptr= qptr->front();
                qptr->pop();
                row.push_back(nodeptr->val);
                cout << "\t\tval = " << nodeptr->val << endl;
                if(nodeptr->left != NULL) {
                    qptr->push(nodeptr->left);
                }
                if(nodeptr->right != NULL) {
                    qptr->push(nodeptr->right);
                }
            }
            vptr->push_back(row);
            row.clear();
        }
    }

    template <typename T>
    void print_vector(vector<vector<T>>* vptr) {
        cout << "\nprint out the vector" << endl;
        int cnt = 0;
        for(auto itr1 = vptr->begin(); itr1 < vptr->end(); itr1++) {
            cout << "\tlevel = " << cnt << endl;
            cnt++;
            for(auto itr2 = itr1->begin(); itr2 < itr1->end(); itr2++) {
                cout << "\t\tval = " << *itr2 << endl;
            }
        }
    }

};

#endif //ARRAY_TO_BINARYTREE_HELPER_H
