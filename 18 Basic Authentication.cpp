#include <iostream>
#include <string>
using namespace std;

int main() {

    string username = "admin";
    string password = "123456";

    cout << "Enter your username ";
    cin >> username;
    cout << "Enter your password ";
    cin >> password;

    if (password != password && username != username) {
        cout << "Failed to log in";
    }
    else {
        cout << "Logged in successfully";
    }

    return 0;
}