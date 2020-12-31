/**
 * Ref.: https://blog.csdn.net/qjh5606/article/details/85881680
 **/

/**
 * splice method in list
 *      - 1st argument is the target position in a list
 *      - 2nd argument is the source list; move semantic is used
 *      - 3rd argument is the position (or iterator) point to a node in the source list
 *      - [optional] 4th argument: work with the 3rd argument to define a range to move
 *        Notice that the interval to move is defined as [3rd argument, 4th argument)
 *
 * Usefully, if source list and target list are the same, splice operation move the node from
 * its initial position (i.e. pointed by itr2) to a different position (i.e. pointed by itr1)
 *
 * If list and target are different, a port of the source list will be moved to the target list
 **/

#include <iostream>
#include <list>

using namespace std;

void printList(const list<int>&, const string&);
list<int> deepCopyList(const list<int>&);

int main() {
    // original lists
    list<int> l1{1, 2, 3, 4, 5, 6};
    list<int> l2{7, 8, 9, 10};
    // deep copy of lists
    list<int> l1Copy;
    list<int> l2Copy;
    // iterators used later one
    list<int>::iterator itr1;
    list<int>::iterator itr2;
    list<int>::iterator itr3;

    printList(l1, "original list 1");
    printList(l2, "original list 2");

    /**
     * move the last element to the 3rd position of the list
     * 1. make itr1 point to the 3nd node in the list
     * 2. make itr2 point to the last node in the list
     * 3. splice
     **/
    l1Copy = deepCopyList(l1);
    itr1 = l1Copy.begin();
    advance(itr1, 2);
    itr2 = l1Copy.end();
    advance(itr2, -1);
    l1.splice(itr1, l1Copy, itr2);
    printList(l1Copy, "reordered list");

    /**
     * move 4th and 5th element to the 2nd position
     **/
    l1Copy = deepCopyList(l1);
    itr1 = l1Copy.begin();
    advance(itr1, 1);   // itr1 points to the 2nd node in the list
    itr2 = l1Copy.begin();
    advance(itr2, 3);   // itr2 points to the 4th node in the list
    itr3 = l1Copy.begin();
    advance(itr3, 5);   // itr3 points to the 6th node in the list
    l1Copy.splice(itr1, l1Copy, itr2, itr3);
    printList(l1Copy, "move nodes 4 - 5 to 2nd position");

    /**
     * move 3rd and 4th element from list 2 to the 2nd position of list 1
     **/
    l1Copy = deepCopyList(l1);
    l2Copy = deepCopyList(l2);
    itr1 = l1Copy.begin();
    advance(itr1, 1); // points to the 2nd position of list 1
    itr2 = l2Copy.begin();
    advance(itr2, 2); // points to the 3rd position of list 2
    itr3 = l2Copy.begin();
    advance(itr3, 4); // point to end of list2
    l1.splice(itr1, l2Copy, itr2, itr3);
    printList(l1Copy, "l1 has fetched 2 nodes from list 2");
    printList(l2Copy, "2 nodes of list 2 has been moved to list 1");

    return 0;

}

// print elements in a list
void printList(const list<int>& listIn, const string& title) {
    int k{0};
    cout << title << endl;
    for (const auto& val : listIn) {
        cout << "\tlist[" << k++ << "] = " << val << endl;
    }
}

// make a deep copy of the list
list<int> deepCopyList(const list<int>& listIn) {
    list<int> listOut;
    for(const auto& val : listIn) {
        listOut.push_back(val);
    }
    return listOut;
}