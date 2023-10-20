#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int integer;
    long long_num;
    char character;
    float floating_point;
    double double_precision;
    
    // Read the values using scanf
    scanf("%d %ld %c %f %lf", &integer, &long_num, &character, &floating_point, &double_precision);
    
    // Print each element on a new line with specified precision
    printf("%d\n", integer);
    printf("%ld\n", long_num);
    printf("%c\n", character);
    printf("%.3f\n", floating_point);
    printf("%.9lf\n", double_precision);
    
    return 0;
}
