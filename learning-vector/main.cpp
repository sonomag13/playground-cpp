#include <iostream>
#include <vector>
#include <time.h>
#include "VectorOperation.h"

using namespace std;

int main() {

    vector<vector<bool>> grid;
    vector<bool> gridrow;
    vector<vector<bool>>::iterator itrRow;
    vector<bool>::iterator itrCol;
    int N = 5;

    srand(time(NULL));

    cout << "\n" << endl;
    cout << "initialize the vector" << endl;
    VecOp::initVector(grid, N);

    cout << "\trow of the grid = " << grid.size() << endl;
    gridrow = *grid.begin();
    cout << "\tcol of the grid = " << gridrow.size() << endl;

    cout << "\naccess with iterator" << endl;
    for(itrRow = grid.begin(); itrRow != grid.end(); itrRow++) {
        for(itrCol = itrRow->begin(); itrCol != itrRow->end(); itrCol++) {
            (itrCol + 1 == itrRow->end()) ? cout << *itrCol : cout << *itrCol << " -> ";
        }
        cout << endl;
    }

    cout << "\naccess with index" << endl;
    for(int i = 0; i < N; i++) {
        // gridrow = grid.at(i);
        gridrow = grid[i];
        for(int j = 0; j < N; j++) {
            // (j + 1 == N) ? cout << gridrow.at(j) : cout << gridrow.at(j) << " -> ";
            // (j + 1 == N) ? cout << gridrow[j] : cout << gridrow[j] << " -> ";
            (j + 1 == N) ? cout << grid[i][j] : cout << grid[i][j] << " -> ";
        }
        cout << endl;
    }

    return 0;

}