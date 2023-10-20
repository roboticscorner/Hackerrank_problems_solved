#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int pos;
    cin >> pos;

    v.erase(v.begin() + pos - 1); // Erase element at the given position

    int start, end;
    cin >> start >> end;

    v.erase(v.begin() + start - 1, v.begin() + end - 1); // Erase elements in the given range

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
