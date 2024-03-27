#include <vector>
using namespace std;

vector<int> Search_Even(int arr[5][5]) {
    vector<int> locations; // vector to store locations of even numbers

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] % 2 == 0) { // check if number is even
                locations.push_back(i); // add row index to vector
                locations.push_back(j); // add column index to vector
            }
        }
    }

    if (locations.empty()) { // check if no even numbers were found
        locations.push_back(-1);
    }

    return locations;
}
