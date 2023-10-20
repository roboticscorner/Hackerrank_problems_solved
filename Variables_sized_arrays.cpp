#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // Create a vector of vectors to represent the variable-length arrays
    vector<vector<int>> a(n);

    // Populate the vector of vectors with the elements
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a[i].resize(k); // Resize the inner vector to size k

        for (int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }

    // Process the queries
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        cout << a[x][y] << endl;
    }

    return 0;
}
