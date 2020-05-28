//
// Created by strobe on 4/26/20.
//

#pragma once

#include <iostream>
#include <queue>

using namespace  std;

template <typename T>
void printQueue(T& inputQueue) {
    cout << "print out the queue" << endl;
    cout << "\t";
    while (inputQueue.size() != 1) {
        cout << inputQueue.top() << " -> ";
        inputQueue.pop();
    }
    cout << inputQueue.top() << endl;
}