#include <iostream>
#include <string>

using namespace std;


int main (int argc, char **argv) {
    string message = "hello, world!@#$%^&*()";
    size_t messageLength = message.length();

    // strip out all non-alpha chars
    for (size_t i = 0; i < messageLength; i++) {
        if (!isalpha(message[i])) {
            // cout << "Removing '" << message[i] << "'\n";
            message = message.substr(0, i) + message.substr(i+1);
        }
    }

    cout << message << '\n';

    return EXIT_SUCCESS;
}
