#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;

        // Use lower_bound to find the first element greater than or equal to x
        auto it = lower_bound(arr.begin(), arr.end(), x);

        if (it != arr.end() && *it == x) {
            cout << "Yes " << (it - arr.begin() + 1) << endl;
        } else if (it != arr.begin()) {
            cout << "No " << (it - arr.begin() + 1) << endl;
        } else {
            cout << "No " << 1 << endl;
        }
    }

    return 0;
}
