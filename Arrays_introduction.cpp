#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the number of integers
    
    int arr[N]; // Declare an array of size N
    
    // Read the integers into the array
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    // Print the integers in reverse order
    for (int i = N - 1; i >= 0; i--) {
        cout << arr[i];
        if (i > 0) {
            cout << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}
