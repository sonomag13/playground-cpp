
#include "Component.h"
#include "DenseGraph.h"
#include "Helper.h"
#include "ReadGraph.h"
#include "SparseGraph.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {

    bool directed{false};

    /*
     // in this section the graph is generated with random variblas
    int numVertex{20};
    int numEdge{100};
    vector<pair<int, int>> edgeList = calcEdges(numVertex, numEdge);
    for (auto edge : edgeList) {
        denseGraph.addEdge(edge.first, edge.second);
        sparseGraph.addEdge(edge.first, edge.second);
    }
     */

    // sparse graph
    int numVertex1 = 13;
    SparseGraph sparseGraph1(numVertex1, directed);
    string sparseGraphFileName1 = "/home/strobe/Desktop/playground-cpp/graph/testG1.txt";
    ReadGraph<SparseGraph>(sparseGraphFileName1, sparseGraph1);
    Component<SparseGraph> graphComponent1(sparseGraph1);
    cout << "Graph 1" << endl;
    cout << "# of components in graph 1 = " << graphComponent1.getComponentCount() << endl;
    sparseGraph1.showGraph();

    int numVertex2 = 7;
    SparseGraph sparseGraph2(numVertex2, directed);
    string sparseGraphFileName2 = "/home/strobe/Desktop/playground-cpp/graph/testG2.txt";
    ReadGraph<SparseGraph>(sparseGraphFileName2, sparseGraph2);
    Component<SparseGraph> graphComponent2(sparseGraph2);
    cout << "\nGraph 2" << endl;
    cout << "# of components in graph 2 = " << graphComponent2.getComponentCount() << endl;
    sparseGraph2.showGraph();

    // dense graph
    /*
    DenseGraph denseGraph(numVertex, directed);
    string denseGraphFileName = "/home/strobe/Desktop/playground-cpp/graph/testG1.txt";
    ReadGraph<DenseGraph>(denseGraphFileName, denseGraph);
    denseGraph.showGraph();
     */

    /*
    // iteration of sparse graph
    cout << "\niterate through sparse graph" << endl;
    for (int v = 0; v < sparseGraph.getNumVertex(); ++v) {
        cout << v << ":";
        SparseGraph::adjListIterator adj(sparseGraph, v);
        for (int w = adj.begin(); !adj.end(); w = adj.next())
            cout << "\t" << w;
        cout << endl;
    }
    // dense graph
    cout << "iterate through dense graph" << endl;
    for (int v = 0; v < denseGraph.getNumVertex(); ++v) {
        cout << v << ":";
        DenseGraph::adjMatrixIterator adj(denseGraph, v);
        for (int w = adj.begin(); !adj.end(); w = adj.next())
            cout << "\t" << w;
        cout << endl;
    }
     */
}
