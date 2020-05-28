
#include "Solution.h"

#include <iostream>
#include <random>
#include <vector>

using namespace std;

int main() {

    int size{20};
    int target{5};

    default_random_engine generator;
    uniform_real_distribution<double> uniformDist(0.0,1.0);
    vector<Point*> vecPoints;

    for (int i = 0; i < size; ++i) {
        auto ptrPoint = new Point(uniformDist(generator), uniformDist(generator));
        vecPoints.push_back(ptrPoint);
    }
    Solution solution;

    vector<Point*> cloestKPoints {solution.findCloestKPoints(vecPoints, target)};

    return 0;

}
