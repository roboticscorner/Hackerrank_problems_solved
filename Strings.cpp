#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    // Calculate lengths
    int len_a = a.size();
    int len_b = b.size();

    // Concatenate strings
    string concat = a + b;

    // Swap the first characters
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    // Output results
    cout << len_a << " " << len_b << endl;
    cout << concat << endl;
    cout << a << " " << b << endl;

    return 0;
}
