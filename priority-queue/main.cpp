
#include "HelperFunctions.h"

#include <iostream>
#include <queue>

using namespace std;

template <typename T>
void printQueue(T&);

int main() {
    // priority_queue<int, vector<int>, less<int>> priorityQueue1;
    priority_queue<int> priorityQueue1;
    priority_queue<int, vector<int>, greater<int>> priorityQueue2;
    priority_queue<int, vector<int>, greater<int>> priorityQueue3;
    int arr[] = {1, 8, 5, 6, 3, 4, 0, 9, 7, 2};
    size_t targetNum{3};
    for (auto val : arr) {
        priorityQueue1.push(val);
        priorityQueue2.push(val);
    }

    cout << "ascending order" << endl;
    printQueue<priority_queue<int, vector<int>, less<int>>>(priorityQueue1);

    cout << "\n\ndecending order" << endl;
    printQueue<priority_queue<int, vector<int>, greater<int>>>(priorityQueue2);

    return 0;
}
