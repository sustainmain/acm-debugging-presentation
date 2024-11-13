#include <iostream>

#define BUFFER_LENGTH 3

using namespace std;


int main (int argc, char **argv) {
    int buf[BUFFER_LENGTH];

    for (int i = 0; i < BUFFER_LENGTH; i++) {
        cin >> buf[i];
    }

    for (int i = 0; i < BUFFER_LENGTH; i++) {
        cout << buf[i] << '\n';
    }

    return EXIT_SUCCESS;
}
