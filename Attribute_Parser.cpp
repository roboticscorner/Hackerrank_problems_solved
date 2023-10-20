
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    cin.ignore(); // Consume the newline character after reading n and q

    map<string, string> attributes;
    vector<string> tagStack;

    // Read the HRML input and process it
    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);

        if (line[1] == '/') {
            // Closing tag, remove the last element from the tagStack
            tagStack.pop_back();
        } else {
            // Opening tag, parse attributes and add to the tagStack
            stringstream ss(line);
            string token;
            ss >> token; // Read the tag name

            if (!tagStack.empty()) {
                // Append the current tag name to the parent tag's name
                token = tagStack.back() + "." + token;
            }

            tagStack.push_back(token);

            while (ss >> token) {
                size_t eqPos = token.find('=');
                if (eqPos != string::npos) {
                    string attrName = token.substr(0, eqPos);
                    string attrValue = token.substr(eqPos + 2, token.size() - eqPos - 3);
                    attributes[tagStack.back() + "~" + attrName] = attrValue;
                }
            }
        }
    }

    // Answer the queries
    for (int i = 0; i < q; ++i) {
        string query;
        cin >> query;
        
        if (attributes.find(query) != attributes.end()) {
            cout << attributes[query] << endl;
        } else {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}
