//
// Created by strobe on 3/23/20.
//

#ifndef CONVERT_ARRAY_TO_BST_DATASTRUCTURE_H
#define CONVERT_ARRAY_TO_BST_DATASTRUCTURE_H


struct BSTNode {
    int val;
    BSTNode* right = NULL;
    BSTNode* left = NULL;
    BSTNode(int val) {
        this->val = val;
    }
};

#endif //CONVERT_ARRAY_TO_BST_DATASTRUCTURE_H
