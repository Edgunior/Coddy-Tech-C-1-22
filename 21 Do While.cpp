#include <iostream>
using namespace std;

int main() {
    int i;

    for (int x = 0; x < 10; x++) {
        cin >> i;
        if (i < 0) {
            break;
        }
        cout << i << '\n';
    }

    return 0;
}
