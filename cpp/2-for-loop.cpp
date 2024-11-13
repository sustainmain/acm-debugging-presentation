#include <iostream>

using namespace std;


int main (int argc, char **argv) {
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += i;
        cout << i << '\n';
    }

    cout << "Sum: " << sum << '\n';

    return EXIT_SUCCESS;
}
