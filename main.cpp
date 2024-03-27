#include <iostream>
#include <vector>
using namespace std;

vector<int> Search_Even(int arr[5][5]);

int main() {
    int arr[5][5] = {{1, 2, 3, 4, 5},
                     {1, 2, 3, 4, 5},
                     {1, 2, 3, 4, 5},
                     {1, 2, 3, 4, 5},
                     {1, 2, 3, 4, 5}};

    vector<int> locations = Search_Even(arr);

    if (locations[0] == -1) {
        cout << "The array contains no even numbers." << endl;
    } else {
        for (int i = 0; i < locations.size(); i += 2) {
            cout << "Even number found at position: (" << locations[i] << ", " << locations[i+1] << ")" << endl;
        }
    }

    return 0;
}

vector<int> Search_Even(int arr[5][5]) {
    vector<int> locations;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] % 2 == 0) {
                locations.push_back(i);
                locations.push_back(j);
            }
        }
    }

    if (locations.empty()) {
        locations.push_back(-1);
    }

    return locations;
}
