//
// Created by strobe on 4/18/20.
//

#pragma once

#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class DenseGraph {
public:
    // constructor & destructor
    DenseGraph(int numVertex, bool directed) {
        this->numVertex = numVertex;
        this->isDirected = directed;
        for (int i = 0; i < numVertex; ++i)
            graphMatrix.push_back(vector<bool>(numVertex, false));
    }

    ~DenseGraph() = default;

    // getters
    int getNumVertex() {
        return numVertex;
    }

    int getNumEdge() {
        return numEdge;
    }

    vector<vector<bool>> getGraphMatrix() {
        return graphMatrix;
    }

    void addEdge(int i, int j) {
        indexQualifier(i);
        indexQualifier(j);
        if (existEdge(i, j))
            return;
        graphMatrix[i][j] = true;
        if (!isDirected)
            graphMatrix[j][i] = true;
        numEdge++;
    }

    bool existEdge(int i, int j) {
        return graphMatrix[i][j];
    }

    void showGraph() {
        cout << "\nprint out sparse graph" << endl;
        for (auto row : graphMatrix) {
            for (auto val : row)
                cout << "\t" << val;
            cout << endl;
        }
    }

    class adjIterator {
    public:
        adjIterator(DenseGraph& denseGraph, int v) : denseGraph(denseGraph) {
            this->v = v;
            this->idx = -1;
        }

        ~adjIterator() = default;

        int begin() {
            idx = -1;
            return next();
        }

        int next() {
            for (idx += 1; idx < denseGraph.getNumVertex(); ++idx)
                if (denseGraph.graphMatrix[v][idx])
                    return idx;
            return -1;
        }

        bool end() {
            return idx >= denseGraph.getNumVertex();
        }

    private:
        DenseGraph& denseGraph;
        int idx;
        int v;
    };

private:
    vector<vector<bool>> graphMatrix;
    int numVertex{0};
    int numEdge{0};
    bool isDirected{false};

    void indexQualifier(int idx) {
        assert(idx >= 0 && idx < numVertex);
    }
};
