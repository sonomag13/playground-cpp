//
// Created by strobe on 4/18/20.
//

#pragma once

#include <cassert>
#include <iostream>

using namespace std;

template<typename GraphType>
class Component {
public:
    Component(GraphType& graphIn) : graph(graphIn) {
        int numVertex = graphIn.getNumVertex();
        setVisited(numVertex);
        cntComp = 0;
        for (int i = 0; i < numVertex; ++i)
            if (!visited[i]) {
                dfs(i);
                cntComp++;
            }
    }

    ~Component() = default;

    int getComponentCount() {
        return cntComp;
    }

    bool isConnecteddd(int vertex1, int vertex2) {
        return compID[vertex1] == compID[vertex2];
    }

private:
    GraphType& graph;
    bool* visited;
    int* compID;
    int cntComp;

    void setVisited(int numVertex) {
        visited = new bool[numVertex];
        compID = new int[numVertex];
        for (int i = 0; i < numVertex; ++i) {
            visited[i] = false;
            compID[i] = -1;
        }
    }

    void dfs(int v) {
        visited[v] = true;
        compID[v] = cntComp;
        typename GraphType::adjIterator adj(graph, v);
        for (int i = adj.begin(); !adj.end(); i = adj.next()) {
            if (!visited[i])
                dfs(i);
        }
    }
};