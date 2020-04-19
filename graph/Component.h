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

private:
    GraphType& graph;
    bool* visited;
    int cntComp;

    void setVisited(int numVertex) {
        visited = new bool[numVertex];
        for (int i = 0; i < numVertex; ++i)
            visited[i] = false;
    }

    void dfs(int v) {
        visited[v] = true;
        typename GraphType::adjIterator adj(graph, v);
        for (int i = adj.begin(); !adj.end(); i = adj.next()) {
            if (!visited[i])
                dfs(i);
        }
    }
};