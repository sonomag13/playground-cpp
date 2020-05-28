//
// Created by strobe on 4/26/20.
//

#pragma onceint

#include <cmath>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Point {
    double x{0.0}, y{0.0};
    Point(double x, double y): x{x}, y{y} { }
};

const Point refPoint(0.0, 0.0);

double calcDistance(Point P1, Point P2) {
    return sqrt(pow(P1.x - P2.x, 2) + pow(P1.y - P2.y, 2));
}

struct comparator {
    bool operator() (const Point& P1, const Point& P2) const {
        // todo
        double delta = calcDistance(P1, refPoint) - calcDistance(P2, refPoint);
        if (delta == 0.0)
            delta = P1.x - P2.x;
        if (delta == 0.0)
            delta = P1.y - P2.y;
        return delta < 0.0;
    }
};

class Solution {

public:
    vector<Point*> findCloestKPoints(vector<Point*>& vecPoints, int target) {
        vector<Point*> solution;
        priority_queue<int, vector<int>, comparator> priorityQueue;
        for (auto ele : vecPoints) {
            // todo
        }



        return solution;
    }


};