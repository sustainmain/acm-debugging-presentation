#include <iostream>
#include <string>

using namespace std;

int squareAndHalf(int input);


int main (int argc, char **argv) {
    int number = 12345;
    string name = "Alice";
    char letter = 'g';
    int otherNumber = 11;

    cout << number << '\n';
    cout << name << '\n';
    cout << letter << '\n';
    cout << squareAndHalf(otherNumber) << '\n';

    return EXIT_SUCCESS;
}

int squareAndHalf(int input) {
    int square = input * input;  // separated so we can try printing value of square
    return square / 2;
}
