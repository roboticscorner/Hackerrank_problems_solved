#include <iostream>
#include <map>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    map<string, int> marks;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            string name;
            int score;
            cin >> name >> score;
            marks[name] += score;
        } else if (type == 2) {
            string name;
            cin >> name;
            marks.erase(name);
        } else if (type == 3) {
            string name;
            cin >> name;
            if (marks.find(name) != marks.end()) {
                cout << marks[name] << endl;
            } else {
                cout << "0" << endl;
            }
        }
    }

    return 0;
}
