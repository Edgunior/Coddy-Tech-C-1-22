#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 3;
    int b = 5;
    int c = 2;
    b += a;
    c -= a;
    c += b;
    a *= c;
    std::cout << a << ' ' << b << ' ' << c;
    return 0;
}