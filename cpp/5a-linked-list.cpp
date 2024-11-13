#include <iostream>

using namespace std;

class Node {
public:
    Node (int newValue, Node *newNext = nullptr) {
        value = newValue;
        next = newNext;
    }

    int value;
    Node* next;
};


int main (int argc, char **argv) {
    /* make a linked list
       10 - 20 - 30 - 40
    */
    Node root(10,
        new Node(20,
        new Node(30,
        new Node(40))));

    Node *cursor = &root;
    while (cursor != nullptr) {
        cursor = cursor->next;
        cout << cursor->value << '\n';
    }

    return EXIT_SUCCESS;
}
