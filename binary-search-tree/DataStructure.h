//
// Created by strobe on 3/28/20.
//

#ifndef BINARY_SEARCH_TREE_DATASTRUCTURE_H
#define BINARY_SEARCH_TREE_DATASTRUCTURE_H

#include <iostream>

template <typename Key, typename Value>
struct Node {
    Key key;
    Value value;
    Node* left;
    Node* right;
    Node(Key key, Value value) {
        this->key = key;
        this->value = value;
        this->left = this->right = NULL;
    };
};

#endif //BINARY_SEARCH_TREE_DATASTRUCTURE_H
