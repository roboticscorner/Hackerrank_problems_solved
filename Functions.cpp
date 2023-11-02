#include <iostream>
#include <algorithm>

int max_of_four(int a, int b, int c, int d) {
    int max_num = std::max({a, b, c, d});
    return max_num;
}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    int max = max_of_four(a, b, c, d);
    std::cout << max << std::endl;
    return 0;
}
