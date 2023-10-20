#include <iostream>
using namespace std;

struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student student;

    // Read student details from input
    cin >> student.age;
    cin >> student.first_name;
    cin >> student.last_name;
    cin >> student.standard;

    // Output student details
    cout << student.age << " " << student.first_name << " " << student.last_name << " " << student.standard << endl;

    return 0;
}
