//
// Created by strobe on 3/27/20.
//

#ifndef BINARY_SEARCH_TREE_BST_H
#define BINARY_SEARCH_TREE_BST_H

#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include "DataStructure.h"

template <typename Key, typename Value>

class BST {

public:

    BST() {
        rootNode = NULL;
        count = 0;
    }

    ~BST() = default;

    bool isEmpty() {
        return count == 0;
    }

    int sizeofTree() {
        return count;
    }

    void recursiveInsert(Key key, Value value) {
        rootNode = recursiveInsert(rootNode, key, value);
    }

    void nonRecursiveInsert(Key key, Value value) {
        nonRecursiveInsert(rootNode, key, value);
    }

    Node<Key, Value>* getRootNode() {
        return rootNode;
    }

    // BFS is used to tranverse all the nodes
    void printNodeInfo() {
        auto nodeQueue = new std::queue<Node<Key, Value>*>;
        Node<Key, Value>* currentNode;
        nodeQueue->push(rootNode);
        int layer = 0, nodeNum;
        while(!nodeQueue->empty()) {
            std::cout << "layer = " << layer << std::endl;
            layer++;
            nodeNum = nodeQueue->size();
            for(int i = 0; i < nodeNum; i++) {
                currentNode = nodeQueue->front();
                nodeQueue->pop();
                std::cout << "\tkey = " << currentNode->key << " and value = " << currentNode->value << std::endl;
                if(currentNode->left != NULL) {
                    nodeQueue->push(currentNode->left);
                }
                if(currentNode->right != NULL) {
                    nodeQueue->push(currentNode->right);
                }
            }
        }
    }

    std::string search(Key targetKey) {
        return search(rootNode, targetKey);
    }

    std::vector<std::string> searchKeyPath() {
        std::vector<std::string> keyPath;
        // std::stringstream keyStringStream;
        // keyStringStream << "";
        std::string keyString;
        _searchKeyPath(rootNode, keyString, keyPath);
        return keyPath;
    }

    static void printPath(std::vector<std::string> keyPath) {
        std::cout << "\n\nprint out all the paths" << std::endl;
        for(auto n : keyPath) {
          std::cout << "\tpath = " << n << std::endl;
        }
    }

    std::vector<int> preOrder() {
        std::vector<int> vectorPreOrder;
        _preOrder(rootNode, vectorPreOrder);
        return vectorPreOrder;
    }

    std::vector<int> midOrder() {
        std::vector<int> vectorMidOrder;
        _midOrder(rootNode, vectorMidOrder);
        return vectorMidOrder;
    }

    std::vector<int> postOrder() {
        std::vector<int> vectorPostOrder;
        _postOrder(rootNode, vectorPostOrder);
        return vectorPostOrder;
    }

    static void printOrder(std::vector<int> order) {
        for(auto i : order) {
            std::cout << i << "->";
        }
        std::cout << std::endl;
    }

private:

    int count;

    Node<Key, Value>* rootNode = NULL;
    /*
     Summary of inserst:
     - A new node is always inserted as a a new leaf.
        - That said, a step of recrusion does not necessarily create a new node
        - Only the basic case of recurion will create a node
     - The insert is implemented using recursion method
        - For each step of the recurison, the rootNode is either the left or right of the parent node
        - The basic case of recurion is that the left or right pointer is NULL (or the rootNode passed in) is NULL. In
          this case, we can create a new node, and link the new node to the left or right pointer of the parent node.
          That said, we return the pointer of the newly created node, and the returned pointer is caught by the right or
          left pointer of the parent node
    */
    Node<Key, Value>* recursiveInsert(Node<Key, Value>* rootNode, Key key, Value value) {
        if(rootNode == NULL) {
            count++;
            return new Node<Key, Value>(key, value);
        }
        if(key == rootNode->key) {
            rootNode->value = value;
        }
        if(key > rootNode->key) {
            rootNode->right = recursiveInsert(rootNode->right, key, value);
        }
        else {
            rootNode->left = recursiveInsert(rootNode->left, key, value);
        }
        return rootNode;
    }

    void nonRecursiveInsert(Node<Key, Value>* rootNode, Key key, Value value) {
        if(rootNode == NULL) {
            this->rootNode = new Node<Key, Value>(key, value);
            count++;
        }
        else {
            while(true) {
                if(rootNode->key == key) {
                    rootNode->value = value;
                    break;
                }
                if(rootNode->key < key) {
                    if(rootNode->right == NULL) {
                      rootNode->right = new Node<Key, Value> (key, value);
                      count++;
                      break;
                    }
                    else {
                      rootNode = rootNode->right;
                    }
                }
                else {
                    if(rootNode->left == NULL) {
                      rootNode->left = new Node<Key, Value> (key, value);
                      count++;
                      break;
                    }
                    else {
                      rootNode = rootNode->left;
                    }
                }
            }
        }

    }

    std::string search(Node<Key, Value>* rootNode, Key targetKey) {
        std::stringstream ss;
        std::string strOut;
        if(rootNode == NULL) {
            return "n/a";
        }
        if(rootNode->key == targetKey) {
            ss << rootNode->value;
            ss >> strOut;
            char curVal = rootNode->value;
            std::string strOut(1, curVal);
            return strOut;
        }
        if(rootNode->key > targetKey) {
            strOut = search(rootNode->left, targetKey);
        }
        else {
            strOut = search(rootNode->right, targetKey);
        }
        return strOut;
    }

    void _searchKeyPath(Node<Key, Value>* currentNode, std::string keyString, std::vector<std::string>& keyPath) {
        if(currentNode == NULL) {
            return;
        }
        if(currentNode->left == NULL && currentNode->right == NULL) {
            keyString.push_back(currentNode->value);
            keyPath.push_back(keyString);
        }
        keyString.push_back(currentNode->value);
        keyString += "->";
        _searchKeyPath(currentNode->left, keyString, keyPath);
        _searchKeyPath(currentNode->right, keyString, keyPath);
    }

    void _preOrder(Node<Key, Value>* currentNode, std::vector<int>& vectorPreOrder) {
        if(currentNode != NULL) {
          vectorPreOrder.push_back(currentNode->key);
          _preOrder(currentNode->left, vectorPreOrder);
          _preOrder(currentNode->right, vectorPreOrder);
        }
    }

    void _midOrder(Node<Key, Value>* currentNode, std::vector<int>& vectorMidOrder) {
        if(currentNode != NULL) {
          _midOrder(currentNode->left, vectorMidOrder);
          vectorMidOrder.push_back(currentNode->key);
          _midOrder(currentNode->right, vectorMidOrder);
        }
    }

    void _postOrder(Node<Key, Value>* currentNode, std::vector<int>& vectorPostOrder) {
        if(currentNode != NULL) {
            _postOrder(currentNode->left, vectorPostOrder);
            _postOrder(currentNode->right, vectorPostOrder);
            vectorPostOrder.push_back(currentNode->key);
        }
    }

};

#endif //BINARY_SEARCH_TREE_BST_H
