#include <iostream>
#include <string>

using namespace std;


int main (int argc, char **argv) {
    string message = "hello, world!@#$%^&*()";

    // strip out all non-alpha chars
    size_t i = 0;
    while (i < message.length()) {
        if(!isalpha(message[i])) {
            // cout << "Removing '" << message[i] << "'\n";
            message = message.substr(0, i) + message.substr(i+1);
            // don't need to increment i because we just removed the char at index i
        }
        else {
            i++;
        }
    }

    cout << message << '\n';

    return EXIT_SUCCESS;
}
