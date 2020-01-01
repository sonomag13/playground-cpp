//
// Created by lu.gao on 12/12/19.
//

#ifndef LEARNING_VECTOR_VECTOROPERATION_H
#define LEARNING_VECTOR_VECTOROPERATION_H

#include <vector>
#include <time.h>

using namespace std;

namespace VecOp{

    void initVector(vector<vector<bool>> &grid, const int &N) {
        vector<bool> gridrow;
        int rand_num;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                rand_num = rand() % 2;
                (j + 1 == N) ? cout << rand_num : cout << rand_num << " -> ";
                gridrow.push_back(rand_num);
            }
            cout << endl;
            grid.push_back(gridrow);
            gridrow.clear();
        }
    }

}

#endif //LEARNING_VECTOR_VECTOROPERATION_H
