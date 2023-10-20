#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of integers
    
    vector<int> v; // Declare a vector to store the integers
    
    // Input the integers and push them into the vector
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    // Sort the vector
    sort(v.begin(), v.end());
    
    // Print the sorted integers separated by a space
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}
